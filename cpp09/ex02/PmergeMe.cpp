/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:11:28 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:11:32 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& other): vector(other.vector), deque(other.deque) {}
PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		this->deque = other.deque;
		this->vector = other.vector;
	}
	return (*this);
}

std::vector<int> PmergeMe::Jacobsthal(int limit)
{
	int next;
	std::vector<int> j;
	j.push_back(3);
	j.push_back(5);
	while (j.back() < limit) {
		next = j[j.size() - 1] + 2 * j[j.size() - 2];
		j.push_back(next);
	}
	return j;
}

void	PmergeMe::sortVector(std::vector<int>& vec) 
{
	if (vec.size() == 1)
		return ;
	int straggler = -1;
	if (vec.size() % 2 == 1)
	{
		straggler = vec.back();
		vec.pop_back();
	}
	std::vector<std::pair<int, int> > pairs;
	for (size_t i = 0; i + 1 < vec.size() ; i += 2)
	{
		if (vec[i] > vec [i + 1])
			pairs.push_back(std::make_pair(vec[i], vec[i + 1]));
		else
			pairs.push_back(std::make_pair(vec[i + 1], vec[i]));
	}
	std::vector<int> bigNums;
	for (size_t i = 0; i < pairs.size(); i++)
		bigNums.push_back(pairs[i].first);
	sortVector(bigNums);
	std::vector<int> mainChain = bigNums;
	for (size_t i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].first == mainChain[0])
		{
			mainChain.insert(mainChain.begin(), pairs[i].second);
			pairs[i].second = -1;
			break;
		}
	}
	sortSmallNum(mainChain, pairs, straggler);
	vec = mainChain;
}

void	PmergeMe::sortDeque(std::deque<int>& deq) 
{
	if (deq.size() == 1)
		return ;
	int straggler = -1;
	if (deq.size() % 2 == 1)
	{
		straggler = deq.back();
		deq.pop_back();
	}
	std::deque<std::pair<int, int> > pairs;
	for (size_t i = 0; i + 1 < deq.size(); i += 2)
	{
		if (deq[i] > deq[i + 1])
			pairs.push_back(std::make_pair(deq[i], deq[i + 1]));
		else
			pairs.push_back(std::make_pair(deq[i + 1], deq[i]));
	}
	std::deque<int> bigNums;
	for (size_t i = 0; i < pairs.size(); i++)
		bigNums.push_back(pairs[i].first);
	sortDeque(bigNums);
	std::deque<int> mainChain = bigNums;
	for (size_t i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].first == mainChain[0])
		{
			mainChain.push_front(pairs[i].second);
			pairs[i].second = -1;
			break;
		}
	}
	sortSmallNum(mainChain, pairs, straggler);
	deq = mainChain;
}

void	PmergeMe::processInput(int argc, char **argv)
{
	if (argc < 2)
		throw error();
	
	for (int i = 1; i < argc; i++)
	{
		std::string	av = argv[i];
		if (av.empty())
			throw error();
		size_t j = 0;
		if (av[j] == '+')
			j++;
		if (j == av.size())
			throw error();
		for (; j < av.size(); j++)
		{
			if (!std::isdigit(av[j]))
				throw error();
		}
		long num = std::atol(argv[i]);
		if (num > 2147483647)
			throw error();
		vector.push_back(static_cast<int>(num));
		deque.push_back(static_cast<int>(num));
	}
}

void	PmergeMe::displayResults() 
{
	clock_t	start,end;
	double	diffV,diffD;

	std::cout << "Before: ";
	for (size_t i = 0; i < vector.size(); i++)
	{
		std::cout << vector[i] << " ";
	}
	std::cout << std::endl;
	start = clock();
	sortVector(vector);
	end = clock();
	diffV = (double)(end - start) * 1000000 / CLOCKS_PER_SEC;
	
	start = clock();
	sortDeque(deque);
	end = clock();
	diffD = (double)(end - start) * 1000000 / CLOCKS_PER_SEC;
	
	std::cout << "After: ";
	for (size_t i = 0; i < vector.size(); i++)
	{
		std::cout << vector[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << vector.size() 
    		<< " elements with std::vector : " << std::fixed << std::setprecision(5) 
    		<< diffV << " us" << std::endl;

	std::cout << "Time to process a range of " << deque.size() 
			<< " elements with std::deque : " << std::fixed << std::setprecision(5) 
			<< diffD << " us" << std::endl;
}

const char *PmergeMe::error::what() const throw()
{
	return ("Error");
}
