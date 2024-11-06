#include <iostream>
#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	Span sp2(sp);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	Span sp3;
	sp3 = sp2;
	sp3 = sp3;
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	Span spr(50000);
	// spr.addRandoms(50001);
	spr.addRandoms(50000);
	std::cout << spr.shortestSpan() << std::endl;
	std::cout << spr.longestSpan() << std::endl;

	int arr[4] = {-1, 55, 29, 4};
	Span sp4(8);
	Span sp5(4);
	sp4.addNumbers(arr, arr + 4);
	sp5 = sp4;
	// sp4.addNumbers(arr, arr + 4);
	// sp4.addNumbers(sp4.begin(), sp4.end());
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;
	sp4.addNumbers(sp5.begin(), sp5.end());
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;
	// sp4.addNumbers(sp5.begin(), sp5.end());
	return 0;
}

