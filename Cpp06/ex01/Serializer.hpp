#pragma once

#include <stdint.h>
#include "Data.hpp"

class Serializer
{
	private:
		Serializer();
		Serializer(Serializer const &src);
		Serializer &operator=(Serializer const &src);

	public:
		virtual ~Serializer();

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
