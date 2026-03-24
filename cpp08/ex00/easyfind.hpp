
#ifndef EASYFIND_HPP
# define AEASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>


class notFound: public std::exception
{
	public:
		virtual const char *what() const throw() {
			return ("Value not found in container!");
		}
};


template <typename T>
typename T::iterator  easyfind(T &container, int x)
{
	typename T::iterator	it;
	
	it = std::find(container.begin(), container.end(), x);
	if (it == container.end())
		throw notFound();
	return (it);
}

#endif