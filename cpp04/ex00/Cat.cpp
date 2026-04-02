/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:28:00 by bekinci-          #+#    #+#             */
/*   Updated: 2026/01/15 18:14:31 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

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
