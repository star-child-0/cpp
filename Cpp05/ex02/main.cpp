#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat *a = new Bureaucrat("Topolino", 1);
	Bureaucrat *b = new Bureaucrat("Paperino", 45);
	Bureaucrat *c = new Bureaucrat("Pippo", 137);
	Bureaucrat *d = new Bureaucrat("Pluto", 150);
	std::cout << *a << std::endl;
	std::cout << *b << std::endl;
	std::cout << *c << std::endl;
	std::cout << *d << std::endl;

	ShrubberyCreationForm *sf = new ShrubberyCreationForm("home");
	std::cout << std::endl << *sf << std::endl << std::endl;
	d->signForm(*sf);

	c->signForm(*sf);
	std::cout << std::endl << *sf << std::endl;
	sf->execute(*c);

	delete sf;
	delete d;

	RobotomyRequestForm *rf = new RobotomyRequestForm("Pierluigi");
	std::cout << std::endl << *rf << std::endl << std::endl;
	c->signForm(*rf);

	b->signForm(*rf);
	std::cout << std::endl << *rf << std::endl;
	rf->execute(*b);

	delete rf;
	delete c;

	PresidentialPardonForm *pf = new PresidentialPardonForm();
	std::cout << std::endl << *pf << std::endl << std::endl;
	b->signForm(*pf);

	a->signForm(*pf);
	std::cout << std::endl << *pf << std::endl;
	pf->execute(*a);
	a->executeForm(*pf);

	delete pf;
	delete b;
	delete a;
}
