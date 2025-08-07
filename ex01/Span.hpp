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
		template <typename T> void	addNumbers  (T start, T end)
		{
			for (std::multiset<int>::iterator iter = _A.begin(); iter != _A.end(); ++iter)
				if (start == iter || end == iter)
					throw std::exception();
			if (_A.size() + (std::distance(start, end)) > _N)
				throw std::exception();
			_A.insert(start, end);
		}
		template <typename T> void	addNumbers  (const T start, const T end)
		{
			for (std::multiset<int>::const_iterator iter = _A.begin(); iter != _A.end(); ++iter)
				if (start == iter || end == iter)
					throw std::exception();
			if (_A.size() + (std::distance(start, end)) > _N)
				throw std::exception();
			_A.insert(start, end);
		}
		void								addRandoms  (unsigned int count);
		unsigned int						size 		() const;
		std::multiset<int>::iterator		begin		();
		std::multiset<int>::iterator		end  		();
		std::multiset<int>::const_iterator	begin		() const;
		std::multiset<int>::const_iterator	end  		() const;

		Span &operator =(const Span &copy);
};

#endif
