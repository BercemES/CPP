/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:21:22 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/17 13:39:18 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class  Fixed
{
private:
	int	 fixedPointValue;
	 static const int fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed& src);
	Fixed& operator=(const Fixed& src);
	~ Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif