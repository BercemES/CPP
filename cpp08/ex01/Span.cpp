/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:08:26 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:08:29 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): max(N) {}

Span::~Span() {}

Span::Span(const Span &other){
	max = other.max;
	numbers = other.numbers;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		max = other.max;
		numbers = other.numbers;
	}
	return (*this);
}

void	Span::addNumber(int x)
{
	if (numbers.size() + 1 > max)
		throw fullCapacity();
	numbers.push_back(x);
	
}

int		Span::shortestSpan()
{
	if (numbers.size() == 1 || numbers.size() == 0)
		throw noDistanceSpan();

	std::sort(numbers.begin(), numbers.end());
	int min = numbers.back() - numbers.front();
	int diff = min;
	for (size_t i = 0; i < numbers.size() - 1; i++)
	{
		diff = numbers[i + 1] - numbers[i];
		if (diff < min)
			min = diff;
	}
	return (min);
}

int		Span::longestSpan()
{
	if (numbers.size() == 1 || numbers.size() == 0)
		throw noDistanceSpan();
	std::sort(numbers.begin(), numbers.end());
	return (numbers.back() - numbers.front());
}

void	Span::addBulk(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	if (std::distance(first, last) + numbers.size() > max)
		throw fullCapacity();
	numbers.insert(numbers.end(), first, last);
}

char const *Span::noDistanceSpan::what() const throw() {
    return "Distance cannot be calculated (Not enough numbers)!!";
}

char const *Span::fullCapacity::what() const throw() {
    return "Full Capacity!!";
}