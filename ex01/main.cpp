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
	sp.printNumbers();

	Span sp2(sp);
	std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	sp2.printNumbers();

	Span sp3;
	sp3 = sp2;
	std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
	sp3.printNumbers();

	Span spr(50000);
	// spr.addRandoms(50001);
	spr.addRandoms(50000);
	std::cout << "Shortest span: " << spr.shortestSpan() << std::endl;
	std::cout << "Longest span: " << spr.longestSpan() << std::endl;

	int arr[5] = {-1, 55, 29, 4, 55};
	Span sp4(10);
	sp4.addNumbers(arr, arr + 5);
	std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp4.longestSpan() << std::endl;
	sp4.printNumbers();
	sp4.addNumbers(sp.begin(), sp.end());
	sp4.printNumbers();
	std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp4.longestSpan() << std::endl;
	Span sp5(4);
	sp5.printNumbers();
	return 0;
}

