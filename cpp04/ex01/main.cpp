/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:15:18 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/25 03:42:38 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogCat.hpp"
#include "Wrong.hpp"

int main()
{
std::cout << YELLOW << "CONSTRUCTOR WITH POINTER" << RESET << std::endl;
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
std::cout << YELLOW << "WRONG ANIMAL TESTS" << RESET << std::endl;
const WrongAnimal* meta_wrong = new WrongAnimal();
const WrongAnimal* wrongCat = new WrongCat();
std::cout << wrongCat->getType() << " " << std::endl;
wrongCat->makeSound();
meta_wrong->makeSound(); 

std::cout << std::endl;

std::cout << YELLOW << "Test4: Assignment operator" << RESET << std::endl;
Dog dog1;
Dog dog2;
dog2 = dog1;
dog2.makeSound();

Cat cat1;
Cat cat2;
cat2 = cat1;
cat2.makeSound();
std::cout << std::endl;

WrongCat wrongCat1;
WrongCat wrongCat2;
wrongCat2 = wrongCat1;
wrongCat2.makeSound();
std::cout << std::endl;

std::cout << YELLOW << "Test5: Copy constructor" << RESET << std::endl;
Dog originalDog;
Dog copyDog(originalDog);
copyDog.makeSound();

Cat originalCat;
Cat copyCat(originalCat);
copyCat.makeSound();

WrongCat originalCat_wrong;
WrongCat copyCat_wrong(originalCat_wrong);
copyCat.makeSound();

std::cout << std::endl;
std::cout << RED << "DECONSTUCTOR TESTS CONTROL" << RESET << std::endl;
std::cout << std::endl;

return 0;
}