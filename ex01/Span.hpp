#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iterator>
#include <set>
#include <cmath>
#include <ctime>

typedef std::string str;

class Span
{
	private:
		unsigned int		_N;
		std::multiset<int>	_A;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		~Span();

		int		longestSpan () const;
		int		shortestSpan() const;
		void	addNumber   (int number);
		void	addNumbers  (int *start, int *end);
		void	addNumbers  (std::multiset<int>::iterator start, std::multiset<int>::iterator end);
		void	addRandoms  (unsigned int count);
		unsigned int					size () const;
		std::multiset<int>::iterator	begin() const;
		std::multiset<int>::iterator	end  () const;

		Span &operator =(const Span &copy);
};

#endif
