/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:31:57 by bekinci-          #+#    #+#             */
/*   Updated: 2025/11/27 18:31:58 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;

}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	int	case_i;

	void (Harl::*funcPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING",  "ERROR"};
	case_i = -1;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			case_i = i;
			break ;
		}
	}
	switch (case_i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*funcPtr[0])();
			/* fall through */
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			(this->*funcPtr[1])();
			/* fall through */
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*funcPtr[2])();
			/* fall through */
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*funcPtr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
