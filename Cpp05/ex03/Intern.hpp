#pragma once

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		Intern& operator=(Intern const &src);
		~Intern();

		bool isForm(std::string formName);
		AForm* makeForm(std::string formName, std::string formTarget);

		class InvalidFormNameException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};
