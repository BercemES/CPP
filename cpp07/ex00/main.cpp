/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:06:21 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:06:23 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main ()
{
	float	x = 12.15f;
	float	y = 7.03f;
	float z = 7.03f;

	std::cout << "x, y || min: " << ::min(x, y) << std::endl;
	std::cout << "y, z (equal) || min: " << ::min(y, z) << std::endl;

	std::cout << std::endl;
	std::cout << "x, y || max: " << ::max(x, y) << std::endl;
	std::cout << "y, z (equal) || max: " << ::max(y, z) << std::endl;

	std::cout << std::endl;
	std::cout << "before swap x: " << x << " before swap y: " << y <<std::endl;
	::swap(x, y);
	std::cout << "after swap x: " << x << " after swap y: " << y <<std::endl;
	std::cout << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}