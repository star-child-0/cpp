#include "Intern.hpp"

Intern::Intern() { }

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern& Intern::operator=(Intern const &src)
{
	if (this != &src)
		*this = src;
	return (*this);
}

Intern::~Intern() { }

bool Intern::isForm(std::string formName)
{
	std::string formList[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};

	for (int i = 0; i < 3; i++)
		if (formName == formList[i])
			return true;
	return false;
}

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
	if (!isForm(formName))
		throw Intern::InvalidFormNameException();

	std::string formList[3] = {
		"ShrubberyCreationForm.cpp",
		"RobotomyRequestForm.cpp",
		"PresidentialPardonForm.cpp"
	};
	AForm *forms[3] = {
		new ShrubberyCreationForm(formTarget),
		new RobotomyRequestForm(formTarget),
		new PresidentialPardonForm(formTarget)
	};

	std::cout << "Intern creates " << formName << " for " << formTarget << std::endl;

	switch (formName[0])
	{
		case 'S':
			delete forms[1];
			delete forms[2];
			return forms[0];
			break;
		case 'R':
			delete forms[0];
			delete forms[2];
			return forms[1];
			break;
		case 'P':
			delete forms[0];
			delete forms[1];
			return forms[2];
			break;
		default:
			delete forms[0];
			delete forms[1];
			delete forms[2];
			throw Intern::InvalidFormNameException();
	}
}

const char* Intern::InvalidFormNameException::what() const throw()
{
	return ("Invalid form name");
}
