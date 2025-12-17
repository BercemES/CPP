/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:57:17 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/17 10:57:20 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class  Fixed
{
private:
	int	 fixedPointValue;
	static const int fractionalBits = 8;
public:
	Fixed();
	Fixed(const int numInt);
	Fixed(const float numFloat);
	Fixed(const Fixed& src);
	~ Fixed();
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	
	float toFloat( void ) const;
	int toInt( void ) const;
	
	Fixed& operator=(const Fixed& src);

	bool operator>(Fixed const &s_num)const;
	bool operator<(Fixed const &s_num)const;
	bool operator>=(Fixed const &s_num)const;
	bool operator<=(Fixed const &s_num)const;
	bool operator==(Fixed const &s_num)const;
	bool operator!=(Fixed const &s_num)const;
	
	Fixed operator+(Fixed const &fixed)const;
	Fixed operator-(Fixed const &fixed)const;
	Fixed operator*(Fixed const &fixed)const;
	Fixed operator/(Fixed const &fixed)const;
	
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	static Fixed &min(Fixed &f_num, Fixed &s_num); 
	static Fixed const &min(Fixed const &f_num, Fixed const &s_num); 
	static Fixed &max(Fixed &f_num, Fixed &s_num); 
	static Fixed const &max(Fixed const &f_num, Fixed const &s_num); 
};

std:: ostream& operator<<(std::ostream &o, Fixed const &fixed);

#endif