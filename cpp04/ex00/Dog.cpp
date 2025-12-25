/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:28:00 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/26 02:27:46 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const std::string& type) {
    this->type = type;
    std::cout << "Dog Constructor called with " << type << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
    std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src) {
    if (this != &src) {
        Animal::operator=(src);
    }
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << "Hav hav hav! 🐶" << std::endl;
}
