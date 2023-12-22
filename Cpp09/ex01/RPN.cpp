#include "RPN.hpp"

RPN::RPN() { }

RPN::RPN(char const *input)
{
	char *tmp = std::strtok((char *)input, " ");
	while (tmp != NULL)
	{
		if (_validOperator(tmp))
		{
			if (_stack.size() < 2)
				throw InvalidInputException();
			_exec(*tmp);
		}
		else if (!_validNumber(tmp))
			throw InvalidInputException();
		else
			_stack.push(std::atoi(tmp));

		tmp = std::strtok(NULL, " ");
	}
	if (_stack.size() != 1)
		throw InvalidInputException();
	std::cout << "Result: " << _stack.top() << std::endl;
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

bool RPN::_validNumber(char const *input)
{
	for (int i = 0; input[i]; i++)
		if (!std::isdigit(input[i]) && input[i] != '-')
			return false;

	int n = std::atoi(input);

	if (n < -9 || n > 9)
		return false;
	return true;
}

bool RPN::_validOperator(char const *input)
{
	if (std::strlen(input) != 1)
		return false;
	if (*input != '+' && *input != '-' && *input != '*' && *input != '/')
		return false;
	return true;
}

void RPN::_exec(char const op)
{
	float a = _stack.top();
	_stack.pop();
	float b = _stack.top();

	switch (op)
	{
		case '+':
			_stack.top() = b + a;
			break;
		case '-':
			_stack.top() = b - a;
			break;
		case '*':
			if (std::isinf(b) && a == 0)
			{
				_stack.top() = nanf("0");
				break;
			}
			_stack.top() = b * a;
			break;
		case '/':
			_stack.top() = b / a;
			break;
		default:
			throw InvalidInputException();
	}
}

const char* RPN::InvalidInputException::what() const throw()
{
	return "Invalid input";
}
