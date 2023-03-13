

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iterator>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T& obj, int _n)
{
	typename T::iterator it;

	it = std::find(obj.begin(), obj.end(), _n);
	if (it == obj.end())
		throw std::bad_exception();
	return (it);
}

#endif
