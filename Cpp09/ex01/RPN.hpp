#pragma once

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <stack>

class RPN
{
	private:
		std::stack<float> _stack;

		RPN();
		RPN(const RPN &rpn);
		RPN &operator=(const RPN &rpn);

		bool _validNumber(char const *input);
		bool _validOperator(char const *input);

		void _exec(char const op);
	public:
		RPN(char const *input);
		~RPN();

		class InvalidInputException : public std::exception {
			virtual const char* what() const throw();
		};
};
