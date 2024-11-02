#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

typedef std::string str;

class Span
{
	private:

	public:
		Span();
		Span(const Span &copy);
		~Span();

		Span &operator =(const Span &copy);
};

#endif
