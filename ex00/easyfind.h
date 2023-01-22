#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator	easyfind(T& container, int value)
{
	if (container.size() == 0)
		throw std::exception();

	typename T::iterator	iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw std::exception();
	return iter;
}

#endif
