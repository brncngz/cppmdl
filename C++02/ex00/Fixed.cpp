

#include "Fixed.hpp"

Fixed::Fixed(void) : num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int num) : num(num)
{
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
	std::cout << "getRawBits member function called" << std::endl;
	return (num);
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
