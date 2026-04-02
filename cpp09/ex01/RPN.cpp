/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:10:59 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:11:02 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}
RPN::RPN(const RPN& other): nums(other.nums) {}
RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
		this->nums = other.nums;
	return (*this);
}

long long	RPN::calc(int x, int y, char op)
{
	long long res;
	long long lx = static_cast<long long>(x);
    long long ly = static_cast<long long>(y);

	if (op == '+')
		res = lx + ly;
	else if (op == '-')
		res = ly - lx;
	else if (op == '*')
		res = lx * ly;
	else if (op == '/')
		res = ly / lx;
	return (res);
}


void	RPN::processInput(const std::string& av)
{
	for (size_t i = 0; i < av.size(); i++)
	{
		if (std::isspace(av[i]))
			continue ;
		if (std::isdigit(av[i]))
		{
			if (i + 1 < av.size() && std::isdigit(av[i + 1]))
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
			nums.push(av[i] - '0');
		}
		else if (av[i] == '+' || av[i] == '-' || av[i] == '*' || av[i] == '/')
		{
			if (nums.size() < 2)
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
			int x = nums.top();
			nums.pop();
			int y = nums.top();
			if (x == 0 && av[i] == '/')
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
			nums.pop();
			long long res = calc(x, y, av[i]);
			if (res > INT_MAX || res < INT_MIN) 
			{
			    std::cerr << "Error" << std::endl;
			    return;
			}
			nums.push(static_cast<int>(res));
		}
		else
		{
			std::cerr << "Error" << std::endl;
			return;
		}
	}
	if (nums.size() == 1)
        std::cout << nums.top() << std::endl;
    else
        std::cerr << "Error" << std::endl;
}
