

#include "Fixed.hpp"

	// Constructors & Destructors
Fixed::Fixed(void) : num(0)
{
}

Fixed::Fixed(int const n)
{
	num = n << frac;
}

Fixed::Fixed(const float n)
{
	num = roundf(n * (1 << frac));
}

Fixed::Fixed(const Fixed& src)
{
	this->operator=(src);
}

Fixed::~Fixed()
{
}
/* ==========================================================*/

	// Member func
int		Fixed::getRawBits(void) const
{
	return (num);
}

void	Fixed::setRawBits(int const raw)
{
	num = raw;
}

int		Fixed::toInt(void) const
{
	return(num >> frac);
}

float	Fixed::toFloat(void) const
{
	return ((float)num / (1 << frac));
}
/*==========================================================*/

	// Op Ovrload
Fixed&	Fixed::operator=(const Fixed& src)
{
	num = src.getRawBits();
	return *this ;
}
/*==========================================================*/
	// Comparison Operators
bool	Fixed::operator>(const Fixed& right)
{
	return (num > right.getRawBits());
}

bool	Fixed::operator<(const Fixed& right)
{
	return (num < right.getRawBits());
}

bool	Fixed::operator>=(const Fixed& right)
{
	return (num >= right.getRawBits());
}

bool	Fixed::operator<=(const Fixed& right)
{
	return (num <= right.getRawBits());
}

bool	Fixed::operator==(const Fixed& right)
{
	return (num == right.getRawBits());
}

bool	Fixed::operator!=(const Fixed& right)
{
	return (num != right.getRawBits());
}
/*==========================================================*/
	//Arithmetic operators
Fixed	Fixed::operator+(const Fixed& right)
{
	Fixed res;

	res.setRawBits(num + right.getRawBits());
	return res;
}

Fixed	Fixed::operator-(const Fixed& right)
{
	Fixed res;

	res.setRawBits(num - right.getRawBits());
	return res;
}

Fixed	Fixed::operator*(const Fixed& right)
{
	Fixed res;

	res.setRawBits((num * right.getRawBits() / (1 << frac)));
	return res;
}

Fixed	Fixed::operator/(const Fixed& right)
{
	Fixed res;

	res.setRawBits((num * ( 1 << frac) / right.getRawBits()));
	return res;
}
/*==========================================================*/
	//	Increment operators
Fixed&	Fixed::operator++(void)
{
	this->num++;
	return *this;
}

Fixed&	Fixed::operator--(void)
{
	this->num--;
	return *this;
}

Fixed	Fixed::operator++(int n)
{
	(void)n;
	Fixed	copy(*this);
	this->num++;
	return copy;
}

Fixed	Fixed::operator--(int n)
{
	(void)n;
	Fixed	copy(*this);
	this->num--;
	return copy;
}
/*==========================================================*/
	//Non Member Function
Fixed&		min(Fixed& x, Fixed& y)
{
	if (x < y)
		return x;
	else
		return y;
}

Fixed&		max(Fixed& x, Fixed& y)
{
	if (x > y)
		return x;
	else
		return y;

}

const Fixed&	Fixed::min(const Fixed& x, const Fixed& y)
{
	if (x.getRawBits() < y.getRawBits())
		return x;
	else
		return y;
}

const Fixed&	Fixed::max(const Fixed& x, const Fixed& y)
{
	if (x.getRawBits() > y.getRawBits())
		return x;
	else
		return y;
}

std::ostream&	operator<<(std::ostream& stream, const Fixed& src)
{
	std::cout << src.toFloat();
	return stream;
}
