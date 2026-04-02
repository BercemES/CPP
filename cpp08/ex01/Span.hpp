/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:08:39 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:08:41 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
#include <algorithm>

class Span
{
private:
	unsigned int max;
	std::vector<int> numbers;
public:
	Span(unsigned int N);
	Span(const Span &other);
	Span& operator=(const Span& other); 
	~Span();

	void	addNumber(int x);
	int		shortestSpan();
	int		longestSpan();
	void	addBulk(std::vector<int>::iterator first, std::vector<int>::iterator last);


	class noDistanceSpan : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class fullCapacity : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif