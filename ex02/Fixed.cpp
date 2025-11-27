#include <cfloat>
#include <cmath>
#include <iostream>
#include <ostream>
#include "Fixed.hpp"

const int Fixed::fractBits = 8; 

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = n << this->fractBits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(n * (1 << this->fractBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

void Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixedPoint = other.fixedPoint;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

float	Fixed::toFloat(void) const
{
	return (this->fixedPoint / (float)(1 << this->fractBits));
}

int		Fixed::toInt(void) const
{
	return (this->fixedPoint >> this->fractBits);
}

int		Fixed::operator>(const Fixed &other) const
{
	return (this->fixedPoint > other.fixedPoint);
}

int		Fixed::operator<(const Fixed &other) const
{
	return (this->fixedPoint < other.fixedPoint);
}

int		Fixed::operator>=(const Fixed &other) const
{
	return (this->fixedPoint >= other.fixedPoint);
}

int		Fixed::operator<=(const Fixed &other) const
{
	return (this->fixedPoint <= other.fixedPoint);
}

int		Fixed::operator==(const Fixed &other) const
{
	return (this->fixedPoint == other.fixedPoint); 
}

int		Fixed::operator!=(const Fixed &other) const
{
	return (this->fixedPoint != other.fixedPoint);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toInt() + other.toInt()));
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toInt() - other.toInt()));
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toInt() * other.toInt()));
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toInt() / other.toInt()));
}

Fixed&	Fixed::operator++(void)
{
	++this->fixedPoint;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++this->fixedPoint;
	return (temp);
}

Fixed&	Fixed::operator--(void)
{
	--this->fixedPoint;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--this->fixedPoint;
	return (temp);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out	<< fixed.toFloat();
	return (out);
}
