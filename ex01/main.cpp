#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed	a;
	Fixed	const b( 10 );
	Fixed	const c( 42.42f );
	Fixed	const d( b );
	// Check why float constructor is called first and the appearance of getRawBits
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return (0);
}

/*
int	main()
{
	Fixed	a(0.6875f);

	std::cout << "a is " << a << std::endl;
	std::cout << "a int is " << a.toInt() << std::endl;
	std::cout << "a float is "<< a.toFloat() << std::endl;
	std::cout << a.getRawBits() << std::endl;

	Fixed	const b(2.5f);
	std::cout << "b is " << b << std::endl;
	std::cout << "b float is " << b.toFloat() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << b.toInt() << std::endl;

	return (0);
}
*/
