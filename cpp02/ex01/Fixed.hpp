/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:53:06 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/10 15:50:06 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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
	Fixed& operator=(const Fixed& src);
	~ Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;
};

std:: ostream& operator<<(std::ostream &o, Fixed const &fixed);


#endif