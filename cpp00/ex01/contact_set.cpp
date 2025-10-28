/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_set.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:23:22 by bercem            #+#    #+#             */
/*   Updated: 2025/09/22 18:11:43 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::~Contact()
{

}

void	Contact::setFirstName(const std::string &fn)
{
	first_name = fn;
}
void	Contact::setLastName(const std::string &ln)
{
	last_name = ln;
}

void	Contact::setNickname(const std::string &nn)
{
	nickname = nn;
}

void	Contact::setPhoneNumber(const std::string &pn)
{
	phone_number = pn;
}

void	Contact::setDarkestSecret(const std::string &ds)
{
	darkest_secret = ds;
}
