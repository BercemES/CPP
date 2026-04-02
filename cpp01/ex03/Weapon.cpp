/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:31:02 by bekinci-          #+#    #+#             */
/*   Updated: 2025/11/27 18:31:04 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) { }
		
Weapon::Weapon(std::string type)
{
	this->type = type;
}	

Weapon::~Weapon(void) { }

const std::string& Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}