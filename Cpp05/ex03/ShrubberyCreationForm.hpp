#pragma once

#include "AForm.hpp"

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>

#define TREE_CMD "find | sed 's|[^/]*/|- |g' > "

class ShrubberyCreationForm : public AForm
{
	private:
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream&os, const ShrubberyCreationForm& f);
