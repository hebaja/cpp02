#pragma  once

#include <ostream>

class Fixed
{
	private:
		int	fixedPoint;
		static const int fractBits;

	public:
		Fixed();
		~Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &other);
		void operator = (const Fixed &other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		int		operator>(const Fixed &other) const;
		int		operator<(const Fixed &other) const;
		int		operator>=(const Fixed &other) const;
		int		operator<=(const Fixed &other) const;
		int		operator==(const Fixed &other) const;
		int		operator!=(const Fixed &other) const;

		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;	
		Fixed	operator*(const Fixed &other) const;	
		Fixed	operator/(const Fixed &other) const;	
	
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static	Fixed&	min(Fixed &a, Fixed &b);
		static	const Fixed&	min(const Fixed &a, const Fixed &b);
		static	Fixed&	max(Fixed &a, Fixed &b);
		static	const Fixed&	max(const Fixed &a, const Fixed &b);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);
