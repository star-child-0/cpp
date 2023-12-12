#include "RPN.hpp"

RPN::RPN() { }

RPN::RPN(char const *input)
{
	_splitInput(input);

	while (!_input.empty())
	{
		if (std::isdigit(*_input.front()))
		{
			_validateNumber(_input.front());
			_operands.push(std::atoi(_input.front()));
		}
		else if (*_input.front() == '+' || *_input.front() == '-' || *_input.front() == '*' || *_input.front() == '/')
		{
			_validateOperator(_input.front());
			_operators.push(*_input.front());
		}
		else
			throw InvalidInputException();
		_input.pop();
	}
	if (_operators.size() != _operands.size() - 1)
		throw InvalidInputException();

	_exec();
}

RPN::RPN(const RPN &rpn)
{
	*this = rpn;
}

RPN &RPN::operator=(const RPN &rpn)
{
	if (this != &rpn)
		*this = rpn;
	return *this;
}

RPN::~RPN() { }

void RPN::_splitInput(char const *input)
{
	char *tmp = std::strtok((char *)input, " ");
	while (tmp != NULL)
	{
		_input.push(tmp);
		tmp = std::strtok(NULL, " ");
	}
}

void RPN::_validateNumber(char const *input)
{
	int n = std::atoi(input);

	if (n < 0 || n > 9)
		throw InvalidInputException();
}

void RPN::_validateOperator(char const *input)
{
	if (std::strlen(input) != 1)
		throw InvalidInputException();
	if (*input != '+' && *input != '-' && *input != '*' && *input != '/')
		throw InvalidInputException();
}

void RPN::_exec()
{
	int n = _operands.front();
	_operands.pop();
	while (!_operators.empty() && !_operands.empty())
	{
		if (_operators.front() == '+')
			n += _operands.front();
		else if (_operators.front() == '-')
			n -= _operands.front();
		else if (_operators.front() == '*')
			n *= _operands.front();
		else if (_operators.front() == '/')
			n /= _operands.front();

		_operands.pop();
		_operators.pop();
	}
	std::cout << "Result: " << n << std::endl;
}

const char* RPN::InvalidInputException::what() const throw()
{
	return "Invalid input";
}
