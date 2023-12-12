#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./RPN \"1 2 + 3 * 4 -\"" << std::endl;
		return 1;
	}

	try
	{
		RPN rpn(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}

	return 0;
}
