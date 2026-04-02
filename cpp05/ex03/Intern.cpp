/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 11:45:57 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 11:45:59 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern:: Intern( ) {
	std::cout << "Intern default constructor called" << std::endl;

}

Intern::Intern(const Intern &other)
{
	(void) other;
}
Intern &Intern::operator=(const Intern &other) {
	(void) other;
	return (*this);
}

Intern::~Intern() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

AForm* Intern::createShrubbery(std::string target) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomy(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidential(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string form_name, const std::string form_target) {
	std::string forms[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

	AForm* (Intern::*functions[3])(std::string) = {&Intern::createShrubbery, &Intern::createRobotomy, &Intern::createPresidential};
	
	for (int i = 0; i < 3; i++)
    {
        if (form_name == forms[i])
        {
            std::cout << "Intern creates " << form_name << std::endl;
            return (this->*functions[i])(form_target);
        }
    }

    std::cout << "Error: form does not exist\n";
    return NULL;

}