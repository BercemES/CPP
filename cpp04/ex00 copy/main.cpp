/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:15:18 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/26 02:30:04 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
std::cout << YELLOW << "TEST 1: Subject Required Tests" << RESET << std::endl;
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
std::cout << std::endl;

std::cout << YELLOW << "Test2: Creating array: half Dog, half Cat" << RESET << std::endl;
const int SIZE = 10;
const Animal* animals[SIZE];

for (int i = 0; i < SIZE; i++) 
{
    if (i < SIZE/2)
        animals[i] = new Dog();
    else
        animals[i] = new Cat();
}
    
std::cout << "\n[Deleting as Animal*]" << std::endl;
for (int i = 0; i < SIZE; i++) {
    delete animals[i];
}
std::cout << std::endl;


return 0;
}