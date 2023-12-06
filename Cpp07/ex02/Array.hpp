#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T	*_array;
		unsigned int _length;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array &operator=(const Array &copy);
		T &operator[](unsigned int index);
		~Array();

		unsigned int length() const;

		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

template <typename T>
std::ostream& operator<<(std::ostream&os, Array<T>& f);

#include "Array.tpp"
