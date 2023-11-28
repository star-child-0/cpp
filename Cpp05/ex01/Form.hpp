#pragma once

#include "Bureaucrat.hpp"
#include <stdbool.h>
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const &src);
		Form& operator=(Form const &src);
		~Form();

		std::string getName() const;
		bool isSigned() const;
		void setSigned();
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(Bureaucrat &bu);

	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream&os, const Form& f);
