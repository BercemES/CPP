/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:28:00 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/25 03:11:37 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogCat.hpp"

//Dog

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const std::string& type) {
    this->type = type;
    std::cout << "Dog Constructor called with " << type << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
    *this = src;
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

//Cat

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const std::string& type) {
    this->type = type;
    std::cout << "Cat Constructor called with " << type << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
    *this = src;
    std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
    if (this != &src) {
        Animal::operator=(src);
    }
    return *this;
}

void Cat::makeSound(void) const {
    std::cout << "Miyavvvv! 🐱" << std::endl;
}
