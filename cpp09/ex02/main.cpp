/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:11:23 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:11:25 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	try
	{
		PmergeMe PmergeMe;
		PmergeMe.processInput(ac, av);	
		PmergeMe.displayResults();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}