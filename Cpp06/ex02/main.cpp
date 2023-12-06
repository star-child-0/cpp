#include "ex02.hpp"

int main(void)
{
	Base *base = generate();

	std::cout << "Pointer: ";
	identify(base);
	std::cout << "Reference: ";
	identify(*base);

	delete base;

	return (0);
}
