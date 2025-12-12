/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:49:46 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/13 01:13:32 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << "b = " << b << std::endl;
std::cout << "a = " << a << std::endl;

Fixed const c(Fixed(5.05f) / Fixed(0));
std::cout << "c = " << c << std::endl;

std::cout << "++a = " << ++a << std::endl;
std::cout << "a = " << a << std::endl;
std::cout << "a++ = " << a++ << std::endl;
std::cout << "a = " << a << std::endl;
std::cout << "b = " << b << std::endl;
std::cout << "min = " << Fixed::min(a, b) << std::endl;
std::cout << "max = " << Fixed::max( a, b ) << std::endl;
return 0;
}