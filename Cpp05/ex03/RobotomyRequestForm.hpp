#pragma once

#include "AForm.hpp"

#include <iostream>
#include <ctime>

class RobotomyRequestForm : public AForm
{
	private:
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &src);
		~RobotomyRequestForm();

		void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream&os, const RobotomyRequestForm& f);
