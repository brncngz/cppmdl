

#include "Fixed.hpp"

Fixed::Fixed(void) : num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	num = n << frac;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	num = roundf(n * (1 << frac));
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(src);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (num);
}

int		Fixed::toInt(void) const
{
	return(num >> frac);
}

float	Fixed::toFloat(void) const
{
	return ((float)num / (1 << frac));
}

void	Fixed::setRawBits(int const raw)
{
	num = raw;
}

Fixed&	Fixed::operator=(const Fixed& src)
{
	std::cout << "Assignation operator called" << std::endl;
	num = src.getRawBits();
	return *this ;
}

std::ostream&	operator<<(std::ostream& stream, const Fixed& src)
{
	std::cout << src.toFloat();
	return stream;
}
