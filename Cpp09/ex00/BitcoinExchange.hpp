#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>

#define INVALID_VALUE -1

class BitcoinExchange
{
	private:
		std::string _fileName;
		std::map<int, std::pair<std::string, float> > _database;
		std::map<int, std::pair<std::string, float> > _inputfile;

		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &other);
		BitcoinExchange &operator=(BitcoinExchange const &other);

		void _loadInputFile(char * const fileName);
		void _loadDatabase();
		void _readFile(std::ifstream &file, std::string type);

		bool _validateDate(std::string date);
		int _stoi(std::string str);
		bool _validateValue(float value, std::string type);
		float _stof(std::string value);

		float _valueAtDate(std::string date);
		void _exchange();
	public:
		BitcoinExchange(char * const fileName);
		~BitcoinExchange();

		class FileDoesNotExistException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class InputFileErrorException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class DatabaseErrorException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};
