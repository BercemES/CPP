/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:15:08 by bekinci-          #+#    #+#             */
/*   Updated: 2026/01/15 18:14:50 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_HPP
#define WRONG_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const std::string &t);
    WrongAnimal(const WrongAnimal &src);
    ~WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal &src);

    std::string getType() const;
    void setType(const std::string &t);

    void makeSound() const;
};

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const std::string &t);
    WrongCat(const WrongCat &src);
    ~WrongCat();

    WrongCat &operator=(const WrongCat &src);

    void makeSound() const;
};

#endif