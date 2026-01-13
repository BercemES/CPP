/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:15:18 by bekinci-          #+#    #+#             */
/*   Updated: 2026/01/13 03:27:24 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
std::cout << YELLOW << "TEST 1: Animal must be abstract" << RESET << std::endl;
std::cout << BLUE << "(Uncomment lines below: it must NOT compile)" << RESET << std::endl;
/*
Animal a;
Animal* b = new Animal();
a.makeSound();
b->makeSound();
delete b;
*/

std::cout << YELLOW << "TEST 2: Polymorphism still works" << RESET << std::endl;
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
std::cout << std::endl;

return 0;
}