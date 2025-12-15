#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	{
		Fixed	a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		return 0;
	}
	{
		Fixed	a(10);
		Fixed	b(10);
		Fixed	c(7);
		Fixed	d(42);

		Fixed	e(10.1f);
		Fixed	f(10.1f);
		Fixed	g(1.125f);
		Fixed	h(42.42f);

		std::cout << "Operator == (int) must be 1 -> " << (a == b) << std::endl;
		std::cout << "Operator == (int) must be 0 -> " << (a == c) << std::endl;
		std::cout << "Operator == (flo) must be 1 -> " << (e == f) << std::endl;
		std::cout << "Operator == (flo) must be 0 -> " << (e == h) << std::endl;
		
		std::cout << "Operator > (int)  must be 1 -> " << (a > c) << std::endl;
		std::cout << "Operator > (int)  must be 0 -> " << (a > b) << std::endl;
		std::cout << "Operator > (int)  must be 0 -> " << (a > d) << std::endl;
		std::cout << "Operator > (flo)  must be 1 -> " << (e > g) << std::endl;
		std::cout << "Operator > (flo)  must be 0 -> " << (e > f) << std::endl;
		std::cout << "Operator > (flo)  must be 0 -> " << (a > h) << std::endl;
		
		std::cout << "Operator < (int)  must be 1 -> " << (c < a) << std::endl;
		std::cout << "Operator < (int)  must be 0 -> " << (b < a) << std::endl;
		std::cout << "Operator < (int)  must be 0 -> " << (d < a) << std::endl;
		std::cout << "Operator < (flo)  must be 1 -> " << (g < e) << std::endl;
		std::cout << "Operator < (flo)  must be 0 -> " << (f < e) << std::endl;
		std::cout << "Operator < (flo)  must be 0 -> " << (h < e) << std::endl;
		
		std::cout << "Operator >= (int) must be 1 -> " << (a >= c) << std::endl;
		std::cout << "Operator >= (int) must be 1 -> " << (a >= b) << std::endl;
		std::cout << "Operator >= (int) must be 0 -> " << (a >= d) << std::endl;
		std::cout << "Operator >= (flo) must be 1 -> " << (e >= g) << std::endl;
		std::cout << "Operator >= (flo) must be 1 -> " << (e >= f) << std::endl;
		std::cout << "Operator >= (flo) must be 0 -> " << (a >= h) << std::endl;
		
		std::cout << "Operator <= (int) must be 1 -> " << (c <= a) << std::endl;
		std::cout << "Operator <= (int) must be 1 -> " << (b <= a) << std::endl;
		std::cout << "Operator <= (int) must be 0 -> " << (d <= a) << std::endl;
		std::cout << "Operator <= (flo) must be 1 -> " << (g <= e) << std::endl;
		std::cout << "Operator <= (flo) must be 1 -> " << (f <= e) << std::endl;
		std::cout << "Operator <= (flo) must be 0 -> " << (h <= e) << std::endl;
		
		std::cout << "Operator != (int) must be 1 -> " << (a != c) << std::endl;
		std::cout << "Operator != (int) must be 0 -> " << (a != b) << std::endl;
		std::cout << "Operator != (flo) must be 1 -> " << (e != g) << std::endl;
		std::cout << "Operator != (flo) must be 0 -> " << (e != f) << std::endl;

	}
	{
		Fixed	a(1.0f);
		Fixed	b(2.0f);

		Fixed	c = a + b;
		std::cout << "Operator + (int) must be 3 -> " << c << std::endl;
		std::cout << ++a << std::endl;
		std::cout << b++ << " " << b << std::endl;
		std::cout << --a << std::endl;
		std::cout << b-- << " " << b << std::endl;

	}
	{
		Fixed	const a(42);
		Fixed	const b(24);
		Fixed	c = a + b;
		std::cout << "a + b == " << c << std::endl;
		c = a - b;
		std::cout << "a - b == " << c << std::endl;
		c = a * b;
		std::cout << "a * b == " << c << std::endl;
		c = a / b;
		std::cout << "a / b == " << c << std::endl;
	}
	{
		Fixed	a(1.3f);
		Fixed	b(1.2f);
		Fixed	res;

		res = Fixed::min(a, b);
		std::cout << res << std::endl;
		res = Fixed::max(a, b);
		std::cout << res << std::endl;
	}
	return (0);
}
