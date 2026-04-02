/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 11:44:23 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 11:44:26 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    srand(time(NULL));

    std::cout << YELLOW << "===== ABSTRACT TEST =====" << RESET << std::endl;
    std::cout << BLUE << "(Uncomment: must NOT compile)" << RESET << std::endl;
    /*
    AForm a;
    AForm* b = new AForm();
    */
   std::cout << "***" << std::endl;


    Bureaucrat boss("Boss", 1);
    Bureaucrat specialist("Specialist", 100);
    Bureaucrat officer("Officer", 150);

    std::cout << std::endl;
    std::cout << boss << specialist << officer << std::endl;


    std::cout << YELLOW << "===== SHRUBBERY TEST =====" << RESET << std::endl;

    ShrubberyCreationForm shrub("Shubbery");

    std::cout << shrub << std::endl;

    std::cout << BLUE << "Officer tries sign & execute" << RESET << std::endl;
    officer.signForm(shrub);
    officer.executeForm(shrub);
    std::cout << std::endl;

    std::cout << BLUE << "Specialist tries sign & execute" << RESET << std::endl;
    specialist.signForm(shrub);
    specialist.executeForm(shrub);
    std::cout << std::endl;

    std::cout << BLUE << "Boss signs & executes" << RESET << std::endl;
    boss.signForm(shrub);
    boss.executeForm(shrub);
    std::cout << std::endl;

    std::cout << YELLOW << "===== ROBOTOMY TEST =====" << RESET << std::endl;

    RobotomyRequestForm robot("Bender");

    std::cout << robot << std::endl;

    std::cout << BLUE << "Officer tries sign & execute" << RESET << std::endl;
    officer.signForm(robot);
    officer.executeForm(robot);
    std::cout << std::endl;

    std::cout << BLUE << "Specialist tries sign & execute" << RESET << std::endl;
    specialist.signForm(robot);
    specialist.executeForm(robot);
    std::cout << std::endl;

    std::cout << BLUE << "Boss signs & executes (multiple times)" << RESET << std::endl;
    boss.signForm(robot);
    boss.executeForm(robot);
    boss.executeForm(robot);
    boss.executeForm(robot);
    std::cout << std::endl;

    std::cout << YELLOW << "===== PRESIDENTIAL TEST =====" << RESET << std::endl;

    PresidentialPardonForm pres("Marvin");

    std::cout << pres << std::endl;

    std::cout << BLUE << "Officer tries sign & execute" << RESET << std::endl;
    officer.signForm(pres);
    officer.executeForm(pres);
    std::cout << std::endl;

    std::cout << BLUE << "Specialist tries sign & execute" << RESET << std::endl;
    specialist.signForm(pres);
    specialist.executeForm(pres);
    std::cout << std::endl;

    std::cout << BLUE << "Boss signs & executes" << RESET << std::endl;
    boss.executeForm(pres);
	boss.signForm(pres);
    boss.executeForm(pres);
    std::cout << std::endl;

    return 0;
}
