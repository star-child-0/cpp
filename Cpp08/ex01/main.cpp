#include "Span.hpp"

int main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "sp Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "sp Longest span : " << sp.longestSpan() << std::endl;

	srand(time(NULL));
	unsigned int len = rand() % 20000;

	Span *s1 = new Span(len);
	for (unsigned int i = 0; i < len; i++)
		s1->addNumber(rand() % len);

	try
	{
		s1->addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	s1->sort();
	std::cout << "s1 Shortest span: " << s1->shortestSpan() << std::endl;
	std::cout << "s1 Longest span : " << s1->longestSpan() << std::endl;

	delete s1;

	Span *s2 = new Span(5);
	for (unsigned int i = 0; i < 5; i++)
		s2->addNumber(rand() % len);

	s2->sort();
	std::cout << "s2 Shortest span: " << s2->shortestSpan() << std::endl;
	std::cout << "s2 Longest span : " << s2->longestSpan() << std::endl;

	delete s2;

	return (0);
}
