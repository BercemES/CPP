/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:28:00 by bekinci-          #+#    #+#             */
/*   Updated: 2026/01/15 18:14:47 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong.hpp"

//WrongAnimal

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &t) : type(t)
{
    std::cout << "WrongAnimal Constructor called with " << t << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    *this = src;
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    if (this != &src)
        type = src.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::setType(const std::string &t)
{
    type = t;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Undefined WrongAnimal sound!" << std::endl;
}

//WrongCat

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &t)
{
    type = t;
    std::cout << "WrongCat Constructor called with " << t << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
    *this = src;
    std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    if (this != &src)
        WrongAnimal::operator=(src);
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Miyav! 🐱 (WrongCat)" << std::endl;
}