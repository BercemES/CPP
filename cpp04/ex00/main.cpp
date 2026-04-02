/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:15:18 by bekinci-          #+#    #+#             */
/*   Updated: 2026/01/15 18:14:43 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrong.hpp"

int main()
{
std::cout << YELLOW << "TEST 1: Subject Required Tests" << RESET << std::endl;
std::cout << std::endl;

const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

std::cout << std::endl;
std::cout << RED << "DECONSTUCTOR CONTROL" << RESET << std::endl;
std::cout << std::endl;

delete meta;
delete i;
delete j;

std::cout << std::endl;
std::cout << YELLOW << "TEST 2: Wrong Classes (No Polymorphism)" << RESET << std::endl;
const WrongAnimal* wrongCat = new WrongCat();
std::cout << "Type: " << wrongCat->getType() << std::endl;
std::cout << "Sound: ";
wrongCat->makeSound();
std::cout << "\n[Direct WrongCat object]" << std::endl;
WrongCat directWrongCat;
std::cout << "Sound: ";
directWrongCat.makeSound();
delete wrongCat;

std::cout << std::endl;
std::cout << YELLOW << "TEST 3: Assignment Operator" << RESET << std::endl;
std::cout << BLUE << "Dog Assignment" << RESET << std::endl;
Dog dog1;
Dog dog2;
dog2 = dog1;
dog2.makeSound();

std::cout << BLUE << "Cat Assignment" << RESET << std::endl;
Cat cat1;
Cat cat2;
cat2 = cat1;
cat2.makeSound();
std::cout << std::endl;

std::cout << YELLOW << "TEST 4: Copy Constructor" << RESET << std::endl;
std::cout << BLUE <<  "Dog Copy" << RESET << std::endl;
Dog originalDog;
Dog copyDog(originalDog);
copyDog.makeSound();

std::cout << BLUE <<  "Cat Copy" << RESET << std::endl;
Cat originalCat;
Cat copyCat(originalCat);
copyCat.makeSound();

WrongCat originalCat_wrong;
WrongCat copyCat_wrong(originalCat_wrong);
copyCat.makeSound();

std::cout << std::endl;
std::cout << YELLOW << "TEST 5: Array of Animals" << RESET << std::endl;
const Animal* animals[5] = {
    new Dog(), new Cat(), new Dog(), new Cat(), new Animal()
};
for (int i = 0; i < 5; i++) {
    animals[i]->makeSound();
    delete animals[i];
}

std::cout << std::endl;
std::cout << YELLOW << "TEST 6: Type Verification" << RESET << std::endl;
	Dog dog;
	Cat cat;
	Animal animal;
	if (dog.getType() == "Dog")
    	std::cout << GREEN << "Dog type is true!" << RESET << std::endl;
	if (cat.getType() == "Cat")
    	std::cout << GREEN << "Cat type is true!" <<  RESET <<std::endl;
	if (animal.getType() == "default")
    	std::cout << GREEN << "Animal type is true!" << RESET << std::endl;

std::cout << std::endl;
std::cout << RED << "DECONSTUCTOR TESTS CONTROL" << RESET << std::endl;
std::cout << std::endl;

return 0;
}