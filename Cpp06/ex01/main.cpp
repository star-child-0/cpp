#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data *data = new Data(42);

	std::cout << "Data: " << data->getNum() << std::endl;
	uintptr_t raw = Serializer::serialize(data);

	std::cout << "Raw: " << raw << std::endl;
	Data *data2 = Serializer::deserialize(raw);

	std::cout << "Data2: " << data2->getNum() << std::endl;

	delete data2;
	return (0);
}
