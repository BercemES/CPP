/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:11:40 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:11:42 by bekinci-         ###   ########.fr       */
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
	
	std::vector<int> Jacobsthal(int limit);
	template <typename C, typename PairC>
	void sortSmallNum(C &mainChain, PairC &pairs, int straggler)
	{
		std::vector<int> 		jacob = Jacobsthal(pairs.size());
		typename C::iterator	it;
		typename C::iterator	limit_it;
		int						lastJacob = 1;

		for (size_t i = 0; jacob.size() && i < jacob.size(); i++)
		{
			int	currJacob = jacob[i];
			for (int index = currJacob - 1; lastJacob <= index; index--)
			{
				if (index < (int)pairs.size() && pairs[index].second != -1)
				{
					limit_it = lower_bound(mainChain.begin(), mainChain.end(), pairs[index].first);
					it = lower_bound(mainChain.begin(), limit_it, pairs[index].second);
					mainChain.insert(it, pairs[index].second);
					pairs[index].second = -1;
				}
			}
			lastJacob = currJacob;			
		}
		for (size_t i = 0; (i < pairs.size() && pairs[i].second != -1); i++)
		{
				
			limit_it = lower_bound(mainChain.begin(), mainChain.end(), pairs[i].first);
			it = lower_bound(mainChain.begin(), limit_it, pairs[i].second);
			mainChain.insert(it, pairs[i].second);
			pairs[i].second = -1;
		}
		if (straggler != -1)
		{
			it = lower_bound(mainChain.begin(), mainChain.end(), straggler);
			mainChain.insert(it, straggler);
		}
	}

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