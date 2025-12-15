#pragma  once

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point();
		~Point();
		Point(const float x, const float y);
		Point(const Point &other);
		Point& operator=(const Point &other);
		Fixed getX() const;
		Fixed getY() const;
};
