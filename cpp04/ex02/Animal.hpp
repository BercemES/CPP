/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:15:08 by bekinci-          #+#    #+#             */
/*   Updated: 2026/01/13 03:21:56 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define RESET	"\033[0m"
# define RED	"\033[31m"
# define YELLOW "\033[33m"
# define BLUE	"\033[34m"
# define GREEN	"\033[32m"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const std::string& type);
	Animal(const Animal& src);
	virtual ~Animal();
	Animal& operator=(const Animal& src);

	virtual void	makeSound() const = 0;

	std::string const	getType(void) const;
	void	setType(const std::string &type);
};

#endif