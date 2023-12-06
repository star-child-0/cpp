#pragma once

#include "Bureaucrat.hpp"
#include <stdbool.h>
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		const std::string	_target;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	public:
		AForm();
		AForm(std::string name, std::string target, int gradeToSign, int gradeToExecute);
		AForm(AForm const &src);
		AForm& operator=(AForm const &src);
		virtual ~AForm();

		std::string getName() const;
		std::string getTarget() const;
		bool isSigned() const;
		void setSigned();
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(Bureaucrat &bu);
		virtual void execute(Bureaucrat const & executor) const;

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

	class FormNotSignedException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream&os, const AForm& f);
