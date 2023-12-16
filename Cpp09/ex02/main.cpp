#include "PmergeMe.hpp"

int main (int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Usage: ./PmergeMe [numbers]" << std::endl;
		return 1;
	}

	try
	{
		PmergeMe pm(av);
		pm.exec();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
}
