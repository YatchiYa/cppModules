
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <map>
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
	return (std::find(container.begin(), container.end(), value));
}

template<typename key_type, typename value_type>
typename std::map<key_type, value_type>::iterator easyfind(std::map<key_type, value_type> &container, int value)
{
	typename std::map<key_type, value_type>::iterator it = container.begin();
	for (; it != container.end(); ++it)
		if (it->second == value)
			return (it);
	return (container.end());
}

template<typename key_type, typename value_type>
typename std::multimap<key_type, value_type>::iterator easyfind(std::multimap<key_type, value_type> &container, int value)
{
	typename std::multimap<key_type, value_type>::iterator it = container.begin();
	for (; it != container.end(); ++it)
		if (it->second == value)
			return (it);
	return (container.end());
}

#endif