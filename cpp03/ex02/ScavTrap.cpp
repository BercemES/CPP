/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:17:30 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/25 14:37:28 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("default")
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap Constructor called with " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src): ClapTrap(src)
{
	*this = src;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (hitPoints == 0 || energyPoints == 0)
	{
		if (energyPoints == 0)
			std::cout << "No energy points left!" << std::endl;
		else if (hitPoints == 0)
		    std::cout << "No hit points left!" << std::endl;
		return;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name
		  << " attacks " << target
		  << ", causing " << attackDamage
		  << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name
			<< " is now in Gate keeper mode." << std::endl;
}
