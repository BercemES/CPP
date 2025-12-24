/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:17:25 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/24 17:29:04 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(const std:: string& name);
	ScavTrap(const ScavTrap& src);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& src);

	void	attack(const std::string& target);
	void	guardGate();
	
};

#endif