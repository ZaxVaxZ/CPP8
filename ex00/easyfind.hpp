#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T> typename T::iterator easyfind(T &container, int element)
{
	typename T::iterator	it;

	it = container.begin();
	while (it != container.end() && *it != element)
		it++;
	return it;
}

#endif
