#include "Point.hpp"

Fixed	cross_point(Point a, Point b, Point c)
{
	return (Fixed((b.getX().toFloat() - a.getX().toFloat()) * (c.getY().toFloat() - a.getY().toFloat()) 
			- (b.getY().toFloat() - a.getY().toFloat()) * (c.getX().toFloat() - a.getX().toFloat())));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	f1;
	Fixed	f2;
	Fixed	f3;
	Fixed	f_zero(0);
	bool	all_positive = true;
	bool	all_negative = true;

	f1 = cross_point(a, b, point);
	f2 = cross_point(b, c, point);
	f3 = cross_point(c, a, point);

	if (f1 <= f_zero || f2 <= f_zero || f3 <= f_zero)
		all_positive = false;
	if (f1 >= f_zero || f2 >= f_zero || f3 >= f_zero)
		all_negative = false;	
	return (all_positive || all_negative);
}
