/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:28:00 by bekinci-          #+#    #+#             */
/*   Updated: 2026/01/15 18:15:36 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("default")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const std::string& type): type(type)
{
	std::cout << "Animal Constructor called with " << type << std::endl;	
}

Animal::Animal(const Animal& src)
{
	*this = src;
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Undefined animal!!!" << std::endl;	
}

std::string const	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(const std::string &type)
{
	this->type = type;
}

