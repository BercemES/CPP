/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:28:00 by bekinci-          #+#    #+#             */
/*   Updated: 2026/01/15 18:15:49 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
    this->_brain = new Brain(*src._brain);
    std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
    if (this != &src)
    {
        Animal::operator=(src);
        delete _brain;
        _brain = new Brain(*src._brain);
    }
    return *this;
}

void Cat::makeSound(void) const {
    std::cout << "Miyavvvv! 🐱" << std::endl;
}

void	Cat::setIdea(int i, const std::string &idea){
	_brain->setIdea(i, idea);
}

std::string	Cat::getIdea(int i) const {
	return(_brain->getIdea(i));
}