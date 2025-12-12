/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:53:00 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/13 01:06:15 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixedPointValue(0) {}

Fixed::Fixed(const int numInt)
{
	this->fixedPointValue = numInt << fractionalBits;
}

Fixed::Fixed(const float numFloat)
{
	this->fixedPointValue = roundf(numFloat * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src)
{
	if (this != &src)
		this->fixedPointValue = src.getRawBits();
	return (*this);
}

 Fixed::~Fixed() {}

int		Fixed::getRawBits( void ) const
{
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

bool Fixed::operator>(Fixed const &s_num)const
{
	return (this->fixedPointValue > s_num.fixedPointValue);
}

bool Fixed::operator<(Fixed const &s_num)const
{
	return (this->fixedPointValue < s_num.fixedPointValue);
}

bool Fixed::operator>=(Fixed const &s_num)const
{
	return (this->fixedPointValue >= s_num.fixedPointValue);
}

bool Fixed::operator<=(Fixed const &s_num)const
{
	return (this->fixedPointValue <= s_num.fixedPointValue);
}

bool Fixed::operator==(Fixed const &s_num)const
{
	return (this->fixedPointValue == s_num.fixedPointValue);
}

bool Fixed::operator!=(Fixed const &s_num)const
{
	return (this->fixedPointValue != s_num.fixedPointValue);
}


Fixed Fixed::operator+(Fixed const &s_num)const
{
	return Fixed(this->toFloat() + s_num.toFloat());
}

Fixed Fixed::operator-(Fixed const &s_num)const
{
	return Fixed(this->toFloat() - s_num.toFloat());
}

Fixed Fixed::operator*(Fixed const &s_num)const
{
	return Fixed(this->toFloat() * s_num.toFloat());
}

Fixed Fixed::operator/(Fixed const &s_num)const
{
	if (s_num.fixedPointValue == 0)
	{
		std::cerr << "Division by zero is undefined behavior." << std::endl;
		return Fixed(0);
	}
	return Fixed(this->toFloat() / s_num.toFloat());
}

Fixed& Fixed::operator++()
{
	this->fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp = *this;
	
	++this->fixedPointValue;
	return (temp);
}

Fixed& Fixed::operator--()
{
	this->fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;
	
	--this->fixedPointValue;
	return (temp);
}


Fixed& Fixed::min(Fixed &f_num, Fixed &s_num)
{
	if (f_num > s_num)
		return (s_num);
	return (f_num);
}

Fixed const &Fixed::min(Fixed const &f_num, Fixed const &s_num)
{
	if (f_num > s_num)
		return (s_num);
	return (f_num);
}

Fixed &Fixed::max(Fixed &f_num, Fixed &s_num)
{
	if (f_num > s_num)
		return (f_num);
	return (s_num);
}

Fixed const &Fixed::max(Fixed const &f_num, Fixed const &s_num)
{
	if (f_num > s_num)
		return (f_num);
	return (s_num);
}

std::ostream& operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}