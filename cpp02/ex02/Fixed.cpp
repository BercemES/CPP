/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:53:00 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/12 17:55:14 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

 Fixed:: Fixed(): fixedPointValue(0) {}

Fixed::Fixed(const int numInt)
{
	this->fixedPointValue = numInt << fractionalBits;
}

Fixed::Fixed(const float numFloat)
{
	this->fixedPointValue = roundf(numFloat * (1 << fractionalBits));
}

Fixed:: Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->fixedPointValue = src.getRawBits();
	return (*this);
}

 Fixed::~ Fixed() {}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointValue);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixedPointValue = raw;
}

float Fixed::toFloat( void ) const
{
	return((float)this->fixedPointValue / (1 << fractionalBits));
}

int Fixed::toInt( void ) const
{
	return(this->fixedPointValue >> this->fractionalBits);
}


std:: ostream& operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}