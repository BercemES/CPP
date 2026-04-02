/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:21:39 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/25 14:37:03 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap Constructor called with " << name << std::endl;
}


FragTrap::FragTrap(const FragTrap& src): ClapTrap(src)
{
	*this = src;
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name
			<< " wants a high five ✋" << std::endl;
}
