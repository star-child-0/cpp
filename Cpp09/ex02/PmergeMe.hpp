#pragma once

#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <cstdlib>
#include <ctime>

class PmergeMe
{
	private:
		std::list<int> _args;
		std::vector<int> _v;
		std::deque<int> _d;

		PmergeMe();
		PmergeMe(PmergeMe const &copy);
		PmergeMe &operator=(PmergeMe const &copy);

		bool _isInList(int n);
		void _printArgs();

		void _sortVector();
		void _Vmis(std::vector<int> &v, int begin, int end);
		void _Vmerge(std::vector<int> &v, int begin, int middle, int end);
		void _printVector();

		void _sortDeque();
		void _Dmis(std::deque<int> &d, int begin, int end);
		void _Dmerge(std::deque<int> &d, int begin, int middle, int end);
	public:
		PmergeMe(char **av);
		~PmergeMe();

		void exec();

		class NegativeNumberException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class DuplicateNumberException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};
