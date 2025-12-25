/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:28:00 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/26 02:29:19 by bercem           ###   ########.fr       */
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

void Dog::makeSound(void) const {
    std::cout << "Hav hav hav! 🐶" << std::endl;
}
