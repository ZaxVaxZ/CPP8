#include "Span.hpp"

Span::Span()
{
	std::cout << "An Span has been created!\n";
}

Span::Span(const Span &copy)
{
	std::cout << "An Span has been created with the same qualities as another!\n";
}

Span &Span::operator =(const Span &copy)
{
	//if (&copy != this)
		//copy
	return *this;
}

Span::~Span()
{
	std::cout << "The Span has been destroyed!\n";
}
