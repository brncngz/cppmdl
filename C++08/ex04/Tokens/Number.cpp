

#include "Number.hpp"


Number::Number(void)	{}

Number::Number(int _n) :
	value(_n)	{}

Number::Number(const Number& src) :
	value(src.value)	{}

Number::~Number()	{}

Number&	Number::operator=(const Number& src)
{
	value = src.value;
	return *this;
}

int		Number::getValue(void) const
{
	return value;
}

int		Number::getType(void) const
{
	return 1;
}

void	Number::print(void) const
{
	std::cout << "Num(" << value << ")";
}
