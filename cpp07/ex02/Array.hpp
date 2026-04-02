/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:06:44 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:06:45 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstddef>
# include <stdexcept>
# include <ctime>
# include <cstdlib>

template <typename T>
class Array
{
	private:
		T*				elements;
		unsigned int	n;
	public:
		Array(): elements(NULL), n(0) {}
		Array(unsigned int n): elements(new T[n]()), n(n) {}
		Array(const Array &other): n(other.n)
		{
			elements = new T[n];
			for (unsigned int i = 0; i < n; i++)
				elements[i] = other.elements[i];
		}
		Array& operator=(const Array &other)
		{
			if (this != &other) {
				delete[] elements;
				n = other.n;
				elements = new T[n];
				for (unsigned int i = 0; i < n; i++)
					elements[i] = other.elements[i];
			}
			return (*this);
		}
		~Array()
		{
			delete[] elements;
		}

		T &operator[](unsigned int i){
			if (i >= n)
				throw std::out_of_range("Index out of bounds!");
			return elements[i];
		}
		
		unsigned int size() const{
			return (n);
		}
};

#endif