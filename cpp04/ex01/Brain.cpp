/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:28:00 by bekinci-          #+#    #+#             */
/*   Updated: 2026/01/15 18:15:04 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& src)
{
	if (this != &src)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = src._ideas[i];
    }
    return *this;
}

void	Brain::setIdea(int i, const std::string &idea) {
	_ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const {
	return (this->_ideas[i]);
}

