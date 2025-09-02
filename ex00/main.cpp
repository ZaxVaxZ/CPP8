#include <iostream>
#include <vector>
#include <queue>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(0);
	v.push_back(3);
	v.push_back(2);
	int element = 1;
	if (easyfind(v, element) == v.end())
		std::cout << "Element " << element << " not found!\n";
	else
		std::cout << "Element " << element << " found at index " << easyfind(v, element) - v.begin() << "!\n";
	element = 2;
	if (easyfind(v, element) == v.end())
		std::cout << "Element " << element << " not found!\n";
	else
		std::cout << "Element " << element << " found at index " << easyfind(v, element) - v.begin() << "!\n";
	const std::vector<int> v2(3, 3);
	element = 3;
	if (easyfind(v, element) == v.end())
		std::cout << "Element " << element << " not found!\n";
	else
		std::cout << "Element " << element << " found at index " << easyfind(v, element) - v.begin() << "!\n";
	element = 4;
	if (easyfind(v, element) == v.end())
		std::cout << "Element " << element << " not found!\n";
	else
		std::cout << "Element " << element << " found at index " << easyfind(v, element) - v.begin() << "!\n";
	return (0);
}
