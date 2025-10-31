/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_phonebook.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:05:33 by bekinci-          #+#    #+#             */
/*   Updated: 2025/10/31 15:12:30 by bekinci-         ###   ########.fr       */
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
	if (input.find_first_of("çğıöşüÇĞİÖŞÜ") != std::string::npos)
	{
		std::cout << RED "⚠️   Please try again without using Turkish characters." RESET << std::endl;
		std::cout << prompt << ": ";
		std::getline(std::cin, input);
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
