/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_get.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:23:15 by bercem            #+#    #+#             */
/*   Updated: 2025/09/22 17:48:14 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"

std::string	Contact::getFirstName() const
{
	return (first_name);
}

std::string	Contact::getLastName() const
{
	return (last_name);
}

std::string	Contact::getNickname() const
{
	return (nickname); 
}

std::string	Contact::getPhoneNumber() const
{ 
	return (phone_number); 
}

std::string	Contact::getDarkestSecret() const
{ 
	return (darkest_secret);
}
