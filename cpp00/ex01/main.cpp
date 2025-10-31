/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:05:06 by bekinci-          #+#    #+#             */
/*   Updated: 2025/10/31 17:23:43 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	ft_welcome()
{
	std::cout << "	Hello! Welcome to Phonebook" << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << " 📞 PhoneBook" << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << "Available commands: 🙂" << std::endl;
	std::cout << BLUE "	•ADD:" RESET << "Save a new contact\033[0m" << std::endl;
	std::cout << YELLOW "	•SEARCH:" RESET " Display a contact" RESET << std::endl;
	std::cout << RED "	•EXIT:" RESET " Quit the program" RESET << std::endl;
	std::cout << "------------------------------------" << std::endl;
}

int	main(void)
{
	std::string	command;
	PhoneBook	phonebook;
	Contact		c;

	ft_welcome();
	while (1)
	{
		std::cout << "Please, enter the command: ";
		if (!(std::getline(std::cin, command)))
			return (1);
		else if (command.compare("ADD") == 0)
			phonebook.addContacts(c);
		else if (command.compare("SEARCH") == 0)
			phonebook.searchContacts();
		else if (command.compare("EXIT") == 0)
		{
			std::cout << GREEN "Exiting PhoneBook... 👋" RESET << std::endl;
			exit(0);
		}
		else
			std::cout << RED "⚠️  INVALID COMMAND! Pls, try again.(ADD, SEARCH, EXIT)" RESET << std::endl;
	}
	return (0);
}
