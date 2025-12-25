/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:15:08 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/25 03:13:50 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCAT_HPP
# define DOGCAT_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(const std::string& type);
	Dog(const Dog& src);
	~Dog();
	Dog& operator=(const Dog& src);

	void	makeSound(void) const;
};

class Cat: public Animal
{
public:
	Cat();
	Cat(const std::string& type);
	Cat(const Cat& src);
	~Cat();
	Cat& operator=(const Cat& src);

	void	makeSound(void) const;
};

#endif