/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:11:40 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/15 17:12:24 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <limits.h>
#include <exception>
#include <ctime>
#include <iomanip>
#include <cstdlib>

class PmergeMe
{
private:
	std::vector<int> vector;
	std::deque<int> deque;

public:
	PmergeMe();
	PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
	~PmergeMe();

	void	processInput(int ac, char **av);
	void	displayResults();
	void	sortVector(std::vector<int>& vec);
	void	sortDeque(std::deque<int>& deq);

	class	error : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};



#endif