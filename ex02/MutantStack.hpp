#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>

typedef std::string str;

class MutantStack
{
	private:

	public:
		MutantStack();
		MutantStack(const MutantStack &copy);
		~MutantStack();

		MutantStack &operator =(const MutantStack &copy);
};

#endif
