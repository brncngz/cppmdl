

#include "Operator.hpp"

Operator::Operator(void)	{}

Operator::Operator(char _c) :
	value(_c)	{}

Operator::Operator(const Operator& src) :
	value(src.value)	{}

Operator::~Operator()	{}

Operator&	Operator::operator=(const Operator& src)
{
	value = src.value;
	return *this;
}

int		Operator::getType(void) const
{
	return 2;
}

void	Operator::print(void) const
{
	std::cout << "Op(" << value << ")";
}

std::string	Operator::print_operation(void) const
{
	if (value == '+')
		return "Add";
	else if (value == '-')
		return "Substract";
	else if (value == '*')
		return "Multiply";
	else
		return "Divide";
}
