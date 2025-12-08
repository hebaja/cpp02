#include "Fixed.hpp"
#include <iostream>

int	main()
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}

/*
int	main()
{
	Fixed f1;
	Fixed f2(f1);
	
	f1.setRawBits(2);
	std::cout << &f1 << " " << f1.getRawBits() << std::endl;
	std::cout << &f1 << " " << f1.getRawBits() << std::endl;
	std::cout << &f2 << " " << f2.getRawBits() << std::endl;

	return (0);
}
*/
