#include "MutantStack.hpp"

MutantStack::MutantStack()
{
	std::cout << "An MutantStack has been created!\n";
}

MutantStack::MutantStack(const MutantStack &copy)
{
	std::cout << "An MutantStack has been created with the same qualities as another!\n";
}

MutantStack &MutantStack::operator =(const MutantStack &copy)
{
	//if (&copy != this)
		//copy
	return *this;
}

MutantStack::~MutantStack()
{
	std::cout << "The MutantStack has been destroyed!\n";
}
