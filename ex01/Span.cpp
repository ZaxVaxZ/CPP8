#include "Span.hpp"

Span::Span(): _N(10000), _A()
{
	srand(time(NULL));
}

Span::Span(unsigned int number): _N(number), _A()
{
	srand(time(NULL));
	if (!number)
		throw std::exception();
}

Span::Span(const Span &copy): _N(copy.size()), _A()
{
	srand(time(NULL));
	_A.insert(copy.begin(), copy.end());
}

int Span::longestSpan() const
{
	if (_A.empty() || _A.size() == 1)
		throw std::exception();

	return (*(--_A.end()) - *(_A.begin()));
}

int Span::shortestSpan() const
{
	if (_A.empty() || _A.size() == 1)
		throw std::exception();

	int	diff;
	std::multiset<int>::iterator tmp;
	diff = *(++_A.begin()) - *(_A.begin());
	for (std::multiset<int>::iterator it = _A.begin(); it != _A.end(); it++)	
	{
		tmp = it;
		if (++tmp == _A.end())
			break ;
		if (*(tmp) - *(it) < diff)
			diff = *(tmp) - *(it);
	}
	return (diff);
}

void Span::addNumber(int number)
{
	if (_A.size() >= _N)
		throw std::exception();
	_A.insert(number);
}

void Span::addNumbers(int *start, int *end)
{
	if (_A.size() + (end - start) > _N)
		throw std::exception();
	_A.insert(start, end);
}

void Span::addRandoms(unsigned int numbers)
{
	if (_A.size() + numbers > _N)
		throw std::exception();
	for(unsigned int i = 0; i < numbers; i++)
		_A.insert(rand() % numbers);
}

unsigned int Span::size() const
{
	return _N;
}

std::multiset<int>::iterator Span::begin()
{
	return _A.begin();
}

std::multiset<int>::iterator Span::end()
{
	return _A.end();
}

Span &Span::operator =(const Span &copy)
{
	if (&copy != this)
	{
		_N = copy.size();
		_A.clear();
		_A.insert(copy.begin(), copy.end());
	}
	return *this;
}

Span::~Span()
{
	
}
