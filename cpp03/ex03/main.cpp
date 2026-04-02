/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:53:13 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/25 14:36:53 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void ) {

	std::cout << RED << "=============== DIAMOND TESTS ===============" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << "a;" << std::endl;
	DiamondTrap	a;
	std::cout << "b;" << std::endl;
	DiamondTrap	b("Bercem");
	std::cout << "c;" << std::endl;
	DiamondTrap c = b;
	std::cout << "d;" << std::endl;
	DiamondTrap d;
	
	d = b;

	std::cout << std::endl;
	std::cout << YELLOW << "Test1: 'Who am I'" << RESET << std::endl;
	std::cout << "whoAmI a;" << std::endl;
	a.whoAmI();
	std::cout << "whoAmI b;" << std::endl;
	b.whoAmI();
	std::cout << "whoAmI c;" << std::endl;
	c.whoAmI();
	std::cout << "whoAmI d;" << std::endl;
	d.whoAmI();
	std::cout << std::endl;
	
	std::cout << YELLOW << "Test2: DiamondTrap Energy" << RESET << std::endl;
	for (int i = 0; i < 11; i++)
		a.attack("Enemy");
	std::cout << std::endl;
	
	std::cout << YELLOW << "Test3: FragTrap" << RESET << std::endl;
	b.highFivesGuys();
	std::cout << std::endl;
	
	std::cout << YELLOW << "Test4: ScavTrap" << RESET << std::endl;
	b.guardGate();
	std::cout << std::endl;

	std::cout << YELLOW << "Test5: Heap Memory" << RESET << std::endl;
	DiamondTrap* e = new DiamondTrap("PointerTest");
	e->whoAmI();
	delete e;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << RED << "DECONSTUCTOR TESTS CONTROL" << RESET << std::endl;
	std::cout << std::endl;
}
