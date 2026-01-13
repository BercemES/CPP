/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:15:08 by bekinci-          #+#    #+#             */
/*   Updated: 2026/01/13 02:47:54 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain		*_brain;
public:
	Dog();
	Dog(const Dog& src);
	~Dog();
	Dog& operator=(const Dog& src);

	void	makeSound(void) const;
	void	setIdea(int i, const std::string &idea);
	std::string	getIdea(int i) const;
};

#endif