

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const num);
		Fixed(float const num);
		Fixed(const Fixed& src);
		~Fixed(void);

		Fixed& operator=(const Fixed& src);
		int		getRawBits(void) const ;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					num;
		static const int	frac = 8;
};

std::ostream&	operator<<(std::ostream& stream, const Fixed& src);

#endif
