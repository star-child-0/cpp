#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "error: invalid argumets" << std::endl;
		return 1;
	}
	std::string n;
	n = av[1];
	ScalarConverter::convert(n);
	return 0;
}
