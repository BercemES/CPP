/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_get.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:04:43 by bekinci-          #+#    #+#             */
/*   Updated: 2025/10/31 13:04:46 by bekinci-         ###   ########.fr       */
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
