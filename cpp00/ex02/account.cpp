/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:11:33 by bercem            #+#    #+#             */
/*   Updated: 2025/09/22 22:13:49 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);

    std::cout << "["
              << (now->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (tm_ptr->tm_mon + 1)
              << std::setw(2) << std::setfill('0') << tm_ptr->tm_mday
              << "_"
              << std::setw(2) << std::setfill('0') << tm_ptr->tm_hour
              << std::setw(2) << std::setfill('0') << tm_ptr->tm_min
              << std::setw(2) << std::setfill('0') << tm_ptr->tm_sec
              << "] ";
}
void	Account::displayAccountsInfos( void )
{
	while (_accountIndex <= _nbAccounts)
	{
		Account::_displayTimestamp();
		std::cout << " index:" << _accountIndex;
		std::cout << ";amount:" << Account::_amount;;
		displayStatus();
	}
	
	
}