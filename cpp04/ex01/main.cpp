/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:15:18 by bekinci-          #+#    #+#             */
/*   Updated: 2026/01/15 18:15:23 by bekinci-         ###   ########.fr       */
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

for (int i = 0; i < SIZE/2; i++)
	animals[i] = new Dog();
for (int i = 5; i < SIZE; i++)
	animals[i] = new Cat();
	
std::cout << BLUE << "\n[Deleting as Animal*]" << RESET << std::endl;
for (int i = 0; i < SIZE; i++) {
	delete animals[i];
}

std::cout << YELLOW << "TEST 3: Deep Copy Check" << RESET << std::endl;
std::cout << BLUE<< "Dog" << RESET << std::endl;
Dog dog1;
dog1.setIdea(0, "I want to play game :)");
Dog dog2(dog1);
dog2.setIdea(0, "I want to bite Tom's ass :)");
std::cout << "Dog1 idea: " << dog1.getIdea(0) << std::endl;
std::cout << "Dog2 idea: " << dog2.getIdea(0) << std::endl;

std::cout << BLUE<< "Cat" << RESET << std::endl;
Cat cat1;
cat1.setIdea(0, "I want to eat somon :)");
Cat cat2(cat1);
cat2.setIdea(0, "My human works hard so I can nap comfortably:)");
std::cout << "Cat1 idea: " << cat1.getIdea(0) << std::endl;
std::cout << "cat2 idea: " << cat2.getIdea(0) << std::endl;
std::cout << std::endl;

return 0;
}