/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:28:00 by bekinci-          #+#    #+#             */
/*   Updated: 2026/01/15 18:15:57 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
	this->_brain = new Brain(*src._brain);
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src) {
	if (this != &src)
	{
		Animal::operator=(src);
		delete _brain;
		_brain = new Brain(*src._brain);
	}
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Hav hav hav! 🐶" << std::endl;
}

void	Dog::setIdea(int i, const std::string &idea){
	_brain->setIdea(i, idea);
}

std::string	Dog::getIdea(int i) const {
	return (_brain->getIdea(i));
}