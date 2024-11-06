#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(0);
	v.push_back(3);
	v.push_back(2);
	std::cout << easyfind(v, 0) << "\n";
	std::cout << easyfind(v, 1) << "\n";
	std::cout << easyfind(v, 2) << "\n";
	std::cout << easyfind(v, 3) << "\n";
	return (0);
}
