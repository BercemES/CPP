/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_phonebook.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 18:23:17 by bercem            #+#    #+#             */
/*   Updated: 2025/09/22 19:22:01 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	nextIndex = 0;
	countContacts = 0;
}

PhoneBook::~PhoneBook()
{
}

std::string get_input(const std::string &prompt)
{
	std::string input;

	std::cout << prompt << ": ";
	std::getline(std::cin, input);
	if (std::cin.eof()) 
	{
		std::cout << "\n" << GREEN "Exiting PhoneBook... 👋" RESET << std::endl;
		exit(0);
	}
	while (1)
	{
		if (!input.empty())
			break;
		std::cout << prompt << " cannot be empty! Please, try again." << std::endl;
		std::cout << prompt << ": ";
		std::getline(std::cin, input);
	}
	return (input);
}

void	PhoneBook::addContacts(Contact &c)
{
	c.setFirstName(get_input("First Name"));
	c.setLastName(get_input("Last Name"));
	c.setNickname(get_input("Nickname"));
	c.setPhoneNumber(get_input("Phone Number"));
	c.setDarkestSecret(get_input("Darkest Secret"));

	contacts[nextIndex] = c;
	if (countContacts < 8)
		countContacts++;
	nextIndex = (nextIndex + 1) % 8;
	std::cout << GREEN "🎉 Contact added successfully!   🎉" RESET << std::endl;
}
