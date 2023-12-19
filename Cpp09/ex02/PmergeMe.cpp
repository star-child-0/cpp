#include "PmergeMe.hpp"

PmergeMe::PmergeMe() :  _args(0), _v(0) , _d(0) { }

PmergeMe::PmergeMe(char **av)
{
	int i = 1;

	while (av[i])
	{
		if (std::atoi(av[i]) < 0)
			throw NegativeNumberException();
		if (_isInList(std::atoi(av[i])))
			throw DuplicateNumberException();
		_args.push_back(std::atoi(av[i]));
		_v.push_back(std::atoi(av[i]));
		_d.push_back(std::atoi(av[i]));
		i++;
	}
}

PmergeMe::PmergeMe(PmergeMe const &copy): _args(copy._args), _v(copy._v), _d(copy._d) { }

PmergeMe &PmergeMe::operator=(PmergeMe const &copy)
{
	if (this != &copy)
	{
		_args = copy._args;
		_v = copy._v;
		_d = copy._d;
	}
	return *this;
}

PmergeMe::~PmergeMe() { }

void PmergeMe::exec()
{
	_printArgs();
	_sortVector();
	_sortDeque();
}

bool PmergeMe::_isInList(int n)
{
	std::list<int>::iterator it = _args.begin();

	for (; it != _args.end(); it++)
		if (*it == n)
			return true;
	return false;
}

void PmergeMe::_printArgs()
{
	int i = 0;
	std::list<int>::iterator it = _args.begin();

	std::cout << "Before: ";
	for (; it != _args.end(); it++)
	{
		if (i == 4)
		{
			std::cout << "[...]";
			break ;
		}

		std::cout << *it << " ";
		i++;
	}
	std::cout << std::endl;
}

void PmergeMe::_sortVector()
{
	std::clock_t start, end;
	double time;

	start = std::clock();
	_Vmis(_v, 0, _v.size() - 1);
	end = std::clock();
	time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;

	std::cout << "After: ";
	_printVector();
	std::cout	<< "Time to process a range of " << _v.size()
				<< " elements with std::vector: " << time << " us" << std::endl;
}

void PmergeMe::_Vmis(std::vector<int> &v, int begin, int end)
{
	int mid;

	if (begin < end)
	{
		mid = (begin + end) / 2;
		_Vmis(v, begin, mid);
		_Vmis(v, mid + 1, end);
		_Vmerge(v, begin, mid, end);
	}
}

void PmergeMe::_Vmerge(std::vector<int> &v, int begin, int middle, int end)
{
	int i = begin;
	int j = middle + 1;
	int k = 0;
	int tmp[end - begin + 1];

	while (i <= middle && j <= end)
	{
		if (v[i] < v[j])
			tmp[k++] = v[i++];
		else
			tmp[k++] = v[j++];
	}
	while (i <= middle)
		tmp[k++] = v[i++];
	while (j <= end)
		tmp[k++] = v[j++];
	for (i = begin; i <= end; i++)
		v[i] = tmp[i - begin];
}

void PmergeMe::_printVector()
{
	int i = 0;
	std::vector<int>::iterator it = _v.begin();

	for (; it != _v.end(); it++)
	{
		if (i == 4)
		{
			std::cout << "[...]";
			break ;
		}
		std::cout << *it << " ";
		i++;
	}
	std::cout << std::endl;
}

void PmergeMe::_sortDeque()
{
	std::clock_t start, end;
	double time;

	start = std::clock();
	_Dmis(_d, 0, _d.size() - 1);
	end = std::clock();
	time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;

	std::cout	<< "Time to process a range of " << _d.size()
				<< " elements with std::deque: " << time << " us" << std::endl;
}

void PmergeMe::_Dmis(std::deque<int> &d, int begin, int end)
{
	int mid;

	if (begin < end)
	{
		mid = (begin + end) / 2;
		_Dmis(d, begin, mid);
		_Dmis(d, mid + 1, end);
		_Dmerge(d, begin, mid, end);
	}
}

void PmergeMe::_Dmerge(std::deque<int> &d, int begin, int middle, int end)
{
	int i = begin;
	int j = middle + 1;
	int k = 0;
	int tmp[end - begin + 1];

	while (i <= middle && j <= end)
	{
		if (d[i] < d[j])
			tmp[k++] = d[i++];
		else
			tmp[k++] = d[j++];
	}
	while (i <= middle)
		tmp[k++] = d[i++];
	while (j <= end)
		tmp[k++] = d[j++];
	for (i = begin; i <= end; i++)
		d[i] = tmp[i - begin];
}

const char *PmergeMe::NegativeNumberException::what() const throw()
{
	return "Negative numbers are not allowed";
}

const char *PmergeMe::DuplicateNumberException::what() const throw()
{
	return "Duplicate numbers are not allowed";
}
