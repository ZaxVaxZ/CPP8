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
			if (this != &src)
				*this = src;
			return (*this);
		}

		MutantStack &operator=(const MutantStack &copy)
		{
			if (this != &copy)
				*this = copy;
			return (*this);
		}
};
// template <class T> class MutantStack : public std::stack<T>
// {
// 	public:
// 		typedef std::stack<T> stack;
// 		typedef typename stack::container_type container;
// 		typedef typename container::iterator iterator;

// 		// Constructors
// 		MutantStack() : stack()
// 		{
// 			std::cout << "Default Constructor called" << std::endl;
// 		}

// 		MutantStack(const stack &src) : stack(src)
// 		{
// 			std::cout << "Copy Constructor called" << std::endl;
// 		}

// 		// Deconstuctor
// 		~MutantStack()
// 		{
// 			std::cout << "Deconstuctor called" << std::endl;
// 		}

// 		// Overloaded opperators
// 		stack &operator=(const stack &src)
// 		{
// 			if (*this != src)
// 				*this = src;
// 			return (*this);
// 		}

// 		// begin iterator
// 		iterator begin()
// 		{
// 			return (stack::c.begin());
// 		}

// 		// end iterator
// 		iterator end()
// 		{
// 			return (stack::c.end());
// 		}
// };

#endif
