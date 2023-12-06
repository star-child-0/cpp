#include "easyfind.hpp"
#include <list>

int main (void)
{
	std::list<int> lst;
	for (int i = 0; i < 10; i++)
		lst.push_back(i);

	try
	{
		std::list<int>::iterator it = easyfind(lst, 2);
		std::cout << *it << std::endl;
		it = easyfind(lst, 42);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
