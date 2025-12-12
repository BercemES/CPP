
#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

class  Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point& copy);
	Point& operator=(const Fixed& src);
	~Point();
	
	const Fixed &getX(void)const;
	const Fixed &getY(void)const;


};

std:: ostream& operator<<(std::ostream &o, Fixed const &fixed);

#endif