#pragma once

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <queue>

class RPN
{
	private:
		std::queue<char*> _input;
		std::queue<int> _operands;
		std::queue<char> _operators;

		RPN();
		void _splitInput(char const *input);
		void _validateNumber(char const *input);
		void _validateOperator(char const *input);

		void _exec();
	public:
		RPN(char const *input);
		RPN(const RPN &rpn);
		RPN &operator=(const RPN &rpn);
		~RPN();

		class InvalidInputException : public std::exception {
			virtual const char* what() const throw();
		};
};
