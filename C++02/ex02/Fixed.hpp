

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
	// Constructors & Destructors
		Fixed(void);
		Fixed(int const num);
		Fixed(float const num);
		Fixed(const Fixed& src);
		~Fixed(void);

	// Op Ovrload
		Fixed& operator=(const Fixed& src);

	// Comparison operators
		bool	operator>(const Fixed& right);
		bool	operator<(const Fixed& right);
		bool	operator>=(const Fixed& right);
		bool	operator<=(const Fixed& right);
		bool	operator==(const Fixed& right);
		bool	operator!=(const Fixed& right);

	//	Arithmetic operators
		Fixed	operator+(const Fixed& right);
		Fixed	operator*(const Fixed& right);
		Fixed	operator-(const Fixed& right);
		Fixed	operator/(const Fixed& right);


	//	Increment operators
		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

	// Member func
		int		getRawBits(void) const ;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	// Non Member funct
		static const Fixed&			min(const Fixed& x, const Fixed& y);
		static const Fixed&			max(const Fixed& x, const Fixed& y);
	private:
		int					num;
		static const int	frac = 8;
};

std::ostream&	operator<<(std::ostream& stream, const Fixed& src);

#endif
