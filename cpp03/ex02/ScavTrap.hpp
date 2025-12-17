/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:17:25 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/17 13:39:06 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

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