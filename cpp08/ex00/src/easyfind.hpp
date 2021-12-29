#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

template <typename T>
typename T::iterator easyfind(T& container, const int& value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);

	if (it == container.end())
		throw std::exception();
	return it;
}

#endif
