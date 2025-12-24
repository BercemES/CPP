/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:17:30 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/25 01:28:29 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_trap")
{
	this->name = "default";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const std:: string& name): ClapTrap(name + "_clap_trap")
{
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap Constructor called with " << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src): ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	*this = src;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
		this->name = src.name;
	}
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}

