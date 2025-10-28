/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:23:00 by bercem            #+#    #+#             */
/*   Updated: 2025/09/22 19:22:29 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static void	writeLst(Contact contacts[], int i)
{
	std::cout << "First Name: " << contacts[i].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[i].getDarkestSecret() << std::endl;
}

void	PhoneBook::getIndex()
{
	std::string	input;
	int			index;
	char		remaining;

	while (1)
	{
		std::cout << "👉 Pls, enter index to display details: ";
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0 || std::cin.eof())
		{
			std::cout << "\n" << GREEN "Exiting PhoneBook... 👋" RESET << std::endl;
			exit(0);
		}
		std::stringstream ss(input);
		if (!(ss >> index) || (ss >> remaining))
		{
			std::cout << RED "⚠️ Invalid index input!\n" RESET << std::endl;
			continue ;
		}
		if (index > 0 && index <= countContacts)
		{
			writeLst(contacts, index - 1);
			break;
		}
		std::cout << RED "⚠️ Index out of range!\n" RESET << std::endl;
	}
}

static void	cHeader()
{
	std::string hyphen;

	hyphen.append(50u, '-'); 
	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << hyphen << std::endl;
}

static std::string formatForTable(const std::string &str)
{
	std::string	string;
	
	if (str.length() > 10)
	{
		string = str.substr(0, 9);
		string.append(".");
		return (string);
	}
	return (str);
}

void	PhoneBook::searchContacts()
{
	int	i;
	std::string star;

	if (countContacts == 0)
	{
		std::cout << RED "⚠️ No contacts available! Please add first.\n" RESET;
		return;
	}
	i = 0;
	star.append(50u, '*'); 
	std::cout << std::endl;
	std::cout << star << std::endl;
	cHeader();
	while (i < countContacts)
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		std::cout << std::right << std::setw(10) << formatForTable(contacts[i].getFirstName()) << "|";
		std::cout << std::right << std::setw(10) << formatForTable(contacts[i].getLastName()) << "|";
		std::cout << std::right << std::setw(10) << formatForTable(contacts[i].getNickname()) << "|" << std::endl;
		i++;
	}
	std::cout << star << std::endl;
	std::cout << std::endl;
	getIndex();
}
