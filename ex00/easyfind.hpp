#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

typedef std::string str;

class easyfind
{
	private:

	public:
		easyfind();
		easyfind(const easyfind &copy);
		~easyfind();

		easyfind &operator =(const easyfind &copy);
};

#endif
