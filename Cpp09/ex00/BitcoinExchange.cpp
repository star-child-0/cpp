#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _fileName("") { }

BitcoinExchange::BitcoinExchange(char * const fileName) : _fileName(fileName)
{
	_loadInputFile(fileName);
	_loadDatabase();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other) :
	_fileName(other._fileName), _database(other._database), _inputfile(other._inputfile){ }

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other)
{
	if (this != &other)
	{
		_fileName = other._fileName;
		_database = other._database;
		_inputfile = other._inputfile;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange() { }

void BitcoinExchange::_loadInputFile(char * const fileName)
{
	std::ifstream file;

	file.open(fileName);
	if (!file.is_open())
		throw FileDoesNotExistException();

	_readFile(file, "input");

	file.close();
}

void BitcoinExchange::_loadDatabase()
{
	std::ifstream file;

	file.open("data.csv");
	if (!file.is_open())
		throw DatabaseErrorException();

	_readFile(file, "database");

	file.close();
}

void BitcoinExchange::_readFile(std::ifstream &file, std::string type)
{
	int i = 0;
	std::string line;
	std::string date;
	std::string value;

	std::getline(file, line);
	if (type == "database" && line != "date,exchange_rate")
		throw DatabaseErrorException();
	else if (type == "input" && line != "date | value")
		throw InputFileErrorException();

	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		if (type == "database")
			std::getline(ss, date, ',');
		else
			std::getline(ss, date, '|');
		std::getline(ss, value);

		if (type == "database" && (!_validateDate(date) || !_validateValue(value, type)))
			throw DatabaseErrorException();
		else if (type == "input" && (!_validateDate(date) || !_validateValue(value, type)))
			throw InputFileErrorException();

		value.erase(0, value.find_first_not_of(" \t\n\r"));

		if (type == "database")
			_database.insert(std::make_pair(i, std::make_pair(date, _stof(value))));
		else
			_inputfile.insert(std::make_pair(i, std::make_pair(date, _stof(value))));
		i++;
	}
}

bool BitcoinExchange::_validateDate(std::string date)
{	if (date == "")
		return false;
	date.erase(10, date.find_last_not_of(" \t\n\r") + 1);
	int y = _stoi(date.substr(0, date.find("-")));
	int m = _stoi(date.substr(date.find("-") + 1, date.find_last_of("-") - date.find("-") - 1));
	int d = _stoi(date.substr(date.find_last_of("-") + 1, date.find_last_of("-")));

	if ((m < 1 || m > 12) || (d < 1 || d > 31))
		return false;
	if ((y % 4 == 0 && m == 2 && d > 29) || (y % 4 != 0 && m == 2 && d > 28))
		return false;
	if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
		return false;
	if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ) && d > 31)
		return true;

	return true;
}

int BitcoinExchange::_stoi(std::string str)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (!std::isdigit(str[i]) || str[i] == '+' || str[i] == '-')
			throw std::invalid_argument("stoi");
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * sign);
}

bool BitcoinExchange::_validateValue(std::string value, std::string type)
{
	float n;

	value.erase(0, value.find_first_not_of(" \t\n\r"));
	if (value == "" || value[0] == '-')
		return false;
	try{
		n = _stof(value);
		if (n < 0 || (type == "input" && n > 1000))
			return false;
	} catch(...) {
		return false;
	}
	return true;
}

float BitcoinExchange::_stof(std::string value)
{
	int i = 0;
	float num = 0;
	float div = 1;

	while (value[i] != '\0')
	{
		if (value[i] == '.')
		{
			i++;
			while (value[i] != 0)
			{
				if (!std::isdigit(value[i]))
					throw std::invalid_argument("stof");
				div *= 10;
				num = num * 10 + value[i] - '0';
				i++;
			}
			break;
		}

		if (!std::isdigit(value[i]))
			throw std::invalid_argument("stof");
		num = num * 10 + value[i] - '0';
		i++;
	}
	return (num / div);
}

const char *BitcoinExchange::FileDoesNotExistException::what() const throw()
{
	return "File does not exist.";
}

const char *BitcoinExchange::InputFileErrorException::what() const throw()
{
	return "Error reading input file.";
}

const char *BitcoinExchange::DatabaseErrorException::what() const throw()
{
	return "Error reading database file.";
}
