/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:08:18 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:08:22 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int main()
{

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	std::srand(std::time(0));
	try
	{
		Span	nums(4);
		nums.addNumber(42);
		nums.addNumber(4);
		nums.addNumber(2);
		nums.addNumber(4242);

		std::cout << "Longest span: " << nums.longestSpan() << std::endl;
		std::cout << "Shortest span: " << nums.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span	nums(2);
		nums.addNumber(42);
		nums.addNumber(4);
		nums.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span	nums(1);
		nums.addNumber(42);
		std::cout << "Longest span: " << nums.longestSpan() << std::endl;
		std::cout << "Shortest span: " << nums.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "------- ADD BULK TEST ---------------" << std::endl;
	
	int n = 10000;
	std::vector<int> random_nums;
	for (int i = 0; i < n; i++)
	{
		random_nums.push_back(std::rand() % 10000000000000000); 
	}
	try
	{
		Span nums(n);
		nums.addBulk(random_nums.begin(), random_nums.end());
		std::cout << "Longest span: " << nums.longestSpan() << std::endl;
        std::cout << "Shortest span: " << nums.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "Error Test;" << std::endl;
	try
	{
		Span nums(100);
		nums.addBulk(random_nums.begin(), random_nums.end());
		std::cout << "Longest span: " << nums.longestSpan() << std::endl;
        std::cout << "Shortest span: " << nums.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}