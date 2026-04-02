/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:17:25 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/25 14:37:08 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string	name;
public:
	DiamondTrap();
	DiamondTrap(const std:: string& name);
	DiamondTrap(const DiamondTrap& src);
	virtual ~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& src);

	void attack(const std::string &target);
	void whoAmI(void);
};

#endif