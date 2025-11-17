#pragma  once

class Fixed
{
	private:
		int	fixedPoint;
		static const int fractBits;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &other);
		void operator = (const Fixed &other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
