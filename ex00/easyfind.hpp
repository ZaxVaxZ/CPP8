#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T> int easyfind(T &container, int element)
{
	typename T::iterator	it;
	int						ret;

	it = std::find(container.begin(), container.end(), element);
	ret = it - container.begin();
	if (it == container.end())
		return -1;
	return ret;
}

#endif
