/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 11:41:22 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 11:41:25 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	std::cout << BLUE "TEST 1: TOO HIGH GRADE" RESET << std::endl;

    try { Bureaucrat  tooHigh("tooHigh", 0); }
	catch (std::exception& e)
		{std::cout << RED "Exception caught: " << e.what() << RESET << std::endl;}

	std::cout << std::endl;
	std::cout << YELLOW << std::string(50, '*')<< RESET <<std::endl;
	std::cout << std::endl;

	std::cout << BLUE "TEST2 : TOO LOW GRADE" RESET << std::endl;
    try { Bureaucrat  tooLow("tooLow", 170); }
	catch (std::exception& e)
		{std::cout << RED "Exception caught: " << e.what() << RESET << std::endl;}

	std::cout << std::endl;
	std::cout << YELLOW << std::string(50, '*')<< RESET <<std::endl;
	std::cout << std::endl;

	std::cout << BLUE "TEST 3: INCREMENT & DECREMENT FUNC" RESET << std::endl;
	std::cout << YELLOW << std::string(50, '-')<< RESET <<std::endl;
	std::cout << std::endl;

	Bureaucrat ideal1("ideal1", 3);
    try {
        std::cout << ideal1 << std::endl;

        for (int i = 0; i < 3; i++) {
            try {
                ideal1.incrementGrade();
                std::cout << ideal1;
            }
            catch (const std::exception& e) {
                std::cerr << "Increment exception: " << e.what() << std::endl;
            }
        }
		std::cout << std::endl;
		std::cout << BLUE << std::string(50, '.')<< RESET <<std::endl;
		std::cout << std::endl;
	
		Bureaucrat	ideal2("ideal2", 148);
        std::cout << ideal2 << std::endl;

        for (int i = 0; i < 200; i++) {
            try {
                ideal2.decrementGrade();
                std::cout << ideal2;
            }
            catch (const std::exception& e) {
                std::cerr << "Decrement exception: " << e.what() << std::endl;
                break;
            }
        }
    }
    catch(const std::exception& e) {
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;
	std::cout <<RED "#out of scope" RESET << std::endl;
	
    return 0;
}
