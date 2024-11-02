#include "easyfind.hpp"

easyfind::easyfind()
{
	std::cout << "An easyfind has been created!\n";
}

easyfind::easyfind(const easyfind &copy)
{
	std::cout << "An easyfind has been created with the same qualities as another!\n";
}

easyfind &easyfind::operator =(const easyfind &copy)
{
	//if (&copy != this)
		//copy
	return *this;
}

easyfind::~easyfind()
{
	std::cout << "The easyfind has been destroyed!\n";
}
