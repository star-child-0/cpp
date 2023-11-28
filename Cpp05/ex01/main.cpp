#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat *b = new Bureaucrat("pippo", 30);
	std::cout << *b << std::endl;

	Form *f = new Form("do you love me?", 30, 30);
	std::cout << *f << std::endl;

	b->signForm(*f);
	std::cout << *f << std::endl;
	delete f;

	b->decrementGrade();
	Form *ff = new Form("do you hate me?", 30, 30);
	try
	{
		ff->beSigned(*b);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b->signForm(*ff);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete ff;
	delete b;
}
