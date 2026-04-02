/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:08:13 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:08:15 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main ()
{
	std::vector<int> v;
	v.push_back(12);
	v.push_back(84);
	v.push_back(7);
	
	try
	{
		std::vector<int>::iterator	it;
		it = ::easyfind(v, 12);
		std::cout << *it << " found at this address: " << &(*it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::vector<int>::iterator	it;
		it = ::easyfind(v, 484);
		std::cout << *it << " found at this address: " << &(*it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::list<int> l;
	l.push_back(100);
	l.push_back(200);
	l.push_back(330);
	
	try
	{
		std::list<int>::iterator	it;
		it = ::easyfind(l, 200);
		std::cout << *it  << " found at this address: " << &(*it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::deque<int> d;
	d.push_back(2);
	d.push_front(10);
	d.push_front(78);

	try
	{
		std::deque<int>::iterator it;
		it = ::easyfind(d, 42);
		std::cout << *it << " found at this address: " << &(*it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}