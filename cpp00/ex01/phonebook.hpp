/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:23:45 by bercem            #+#    #+#             */
/*   Updated: 2025/09/22 18:46:10 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <iomanip>
# include <cstdlib>

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"

class Contact
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	public:
	void	    setFirstName(const std::string &fn);
	void	    setLastName(const std::string &ln);
	void	    setNickname(const std::string &nn);
	void	    setPhoneNumber(const std::string &pn);
	void	    setDarkestSecret(const std::string &ds);

	std::string getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickname() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;

	Contact();
	~Contact();
};

class PhoneBook
{
	private:
	int	nextIndex;
	int	countContacts;

	public:
	Contact contacts[8];

	PhoneBook();
	~PhoneBook();

	void			addContacts(Contact &c);
	void			searchContacts();
	void			getIndex();
};

#endif
