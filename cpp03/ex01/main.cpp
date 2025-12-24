/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:53:13 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/24 19:28:00 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {

	ClapTrap	a;
	ClapTrap	b("Bercem");
	ClapTrap	c("Suheyb");

	std::cout << RED << "=============== CLAPTRAP TESTS ===============" << RESET << std::endl;
	std::cout << std::endl;
	
	std::cout << YELLOW << "Test1: ClapTrep Energy" << RESET << std::endl;
	for (int i = 0; i < 11; i++)
		a.attack("Enemy");
	std::cout << std::endl;
	
	std::cout << YELLOW << "Test2: Dead" << RESET << std::endl;
	b.takeDamage(10);
    b.attack("Enemy");
    b.beRepaired(5);
	std::cout << std::endl;

	std::cout << YELLOW << "Test3: Be Repaired" << RESET << std::endl;
	c.takeDamage(3);
    c.beRepaired(5);
	std::cout << std::endl;

	std::cout << RED << "=============== SCAVTRAP TESTS ===============" << RESET << std::endl;
	std::cout << std::endl;
	
	ScavTrap d;
	ScavTrap e("Gate Guard");

	std::cout << YELLOW << "Test4: ScavTrap energy" << RESET << std::endl;
	for (int i = 0; i < 51; i++)
		d.attack("Enemy");
	std::cout << std::endl;
	
	std::cout << YELLOW << "Test5: ScavTrap attack (override)" << RESET << std::endl;
	e.attack("Big Enemy");
	std::cout << std::endl;

	std::cout << YELLOW << "Test6: ScavTrap 'guardGate'" << RESET << std::endl;
	e.guardGate();
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << RED << "DECONSTUCTOR TESTS CONTROL" << RESET << std::endl;
	std::cout << std::endl;
}
