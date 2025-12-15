#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed	a;
	Fixed	const b( 10 );
	Fixed	const c( 42.42f );
	Fixed	const d( b );
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
	std::cout << "b int is " << b.toInt() << std::endl;
	std::cout << "b float is " << b.toFloat() << std::endl;
	std::cout << b.getRawBits() << std::endl;

	Fixed	c(-2.5f);
	std::cout << "c is " << c << std::endl;
	std::cout << "c int is " << c.toInt() << std::endl;
	std::cout << "c float is " << c.toFloat() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}
*/

// beggining of https://web.archive.org/web/20231224143018/https://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html
/*
int main()
{
	Fixed	a(26.5f);

	std::cout << "a is " << a << std::endl;
	std::cout << "a int is " << a.toInt() << std::endl;
	std::cout << "a float is "<< a.toFloat() << std::endl;
	// Changing fractBits to 1 gets rawBits = 53
	// Changing fractBits to 2 gets rawBits = 106
	std::cout << a.getRawBits() << std::endl;

	return (0);
}
*/
