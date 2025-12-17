/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:15:08 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/17 13:38:14 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

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