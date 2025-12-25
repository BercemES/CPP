/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:15:08 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/25 03:02:56 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define RESET	"\033[0m"
# define RED	"\033[31m"
# define YELLOW "\033[33m"

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

	virtual void	makeSound() const;

	std::string const	getType(void) const;
	void	setType(const std::string &type);
};

#endif