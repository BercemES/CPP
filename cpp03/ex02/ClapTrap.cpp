/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:21:35 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/25 14:37:45 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Constructor called with " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
	std::cout << "ClapTrap Copy Constructor called" << std::endl;

}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	if (this != &src)
	{
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " << name
          << " attacks " << target
          << ", causing " << attackDamage
          << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= hitPoints)
    	hitPoints = 0;
	else
	    hitPoints -= amount;
	std::cout << "ClapTrap " << name
		<< " takes " << amount
		<< " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
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
	std::cout << "ClapTrap " << name
          << " repairs itself and gains "
          << amount << " hit points!" << std::endl;
}
