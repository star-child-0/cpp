#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat *b = new Bureaucrat("pippo", 150);

	std::cout << b->getName() << " " << b->getGrade() << std::endl;
	std::cout << *b;

	try
	{
		b->decrementGrade();
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		for (int i = 0; i < 151; i++)
			b->incrementGrade();
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete b;

	try
	{
		Bureaucrat *b = new Bureaucrat("paperino", 151);
		delete b;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat *b = new Bureaucrat("topolino", 0);
		delete b;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
