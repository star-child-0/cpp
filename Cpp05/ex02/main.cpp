#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat *a = new Bureaucrat("topolino", 1);
	Bureaucrat *b = new Bureaucrat("paperino", 45);
	Bureaucrat *c = new Bureaucrat("pippo", 137);
	Bureaucrat *d = new Bureaucrat("pluto", 150);
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
	delete a;
	delete b;
	delete c;
	delete d;
}
