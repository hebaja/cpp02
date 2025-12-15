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
		Fixed&	operator = (const Fixed &other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);
