#pragma once

#include "AForm.hpp"

#include <iostream>
#include <ctime>

class PresidentialPardonForm : public AForm
{
	private:
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm& operator=(PresidentialPardonForm const &src);
		~PresidentialPardonForm();

		void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream&os, const PresidentialPardonForm& f);
