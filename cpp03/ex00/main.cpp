/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:15:18 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/25 14:38:10 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap	a;
	ClapTrap	b("Bercem");
	ClapTrap	c("Suheyb");

	std::cout << YELLOW << "Test1: EnergyPoints" << RESET << std::endl;
	for (int i = 0; i < 11; i++)
		a.attack("Enemy");
	std::cout << std::endl;
	
	std::cout << YELLOW << "Test2: Dead" << RESET << std::endl;
	b.takeDamage(10);
    b.attack("Enemy");
    b.beRepaired(5);
	std::cout << std::endl;

	std::cout << YELLOW << "Test3: BeRepaired" << RESET << std::endl;
	c.takeDamage(3);
    c.beRepaired(5);
}