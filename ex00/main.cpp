#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(0);
	v.push_back(3);
	v.push_back(2);
	for (int i = 0; i < 5; i++)
	{
		if (easyfind(v, i) == v.end())
			std::cout << "Element " << i << " not found!\n";
		else
			std::cout << "Element " << i << " found at index " << easyfind(v, i) - v.begin() << "!!!\n";
	}
	return (0);
}
