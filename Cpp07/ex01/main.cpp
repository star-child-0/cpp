#include "iter.hpp"

int main(void)
{
	int array[] = { 1, 2, 3, 4, 5 };
	std::string array2[] = { "Hello", "World", "!" };

	::iter<int>(array, 5, print);
	::iter<std::string>(array2, 3, print);

	return (0);
}
