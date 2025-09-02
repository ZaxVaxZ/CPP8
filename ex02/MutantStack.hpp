#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T> class MutantStack : public std::stack<T>
{
	public:
		typedef std::stack<T> stack;
		typedef typename stack::container_type::iterator iterator;
		
		MutantStack (): stack() {}
		MutantStack (const stack &src): stack(src) {}
		MutantStack (const MutantStack &copy): stack() {*this = copy;}
		~MutantStack() {}

		iterator begin()
		{
			return (stack::c.begin());
		}

		iterator end()
		{
			return (stack::c.end());
		}

		MutantStack &operator=(const stack &src)
		{
			std::stack<T>::operator =(src);
			return (*this);
		}

		MutantStack &operator=(const MutantStack &copy)
		{
			if (this != &copy)
				*this = copy;
			return (*this);
		}
};

#endif
