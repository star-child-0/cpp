#pragma once
#include <iostream>

template <typename T>
void print(T const &arg)
{
	std::cout << arg << std::endl;
}

template <typename T>
void iter(T *array, int length, void (*f)(T const &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}
