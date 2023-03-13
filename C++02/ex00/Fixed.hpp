

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int num);
		Fixed(const Fixed& src);
		~Fixed(void);

		Fixed& operator=(const Fixed& src);
		int		getRawBits(void) const ;
		void	setRawBits(int const raw);

	private:
		int					num;
		static const int	frac = 8;
};

#endif
