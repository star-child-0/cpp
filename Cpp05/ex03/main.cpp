#include "Bureaucrat.hpp"

#include "Intern.hpp"

int main(void)
{
	Intern i;

	try
	{
		AForm *sf = i.makeForm("ShrubberyCreationForm", "home");
		delete sf;

		AForm *rf = i.makeForm("RobotomyRequestForm", "Bender");
		delete rf;

		AForm *pf = i.makeForm("PresidentialPardonForm", "Zaphod");
		delete pf;

		AForm *uf = i.makeForm("UnknownForm", "UnknownTarget");
		delete uf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
