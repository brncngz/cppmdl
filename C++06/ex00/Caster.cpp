

#include "Caster.hpp"

/* ************************************************************************** */

Caster::Caster(void)	{}

Caster::Caster(std::string str) :
	ival(false), dval(0), fval(true)
{
	try
	{
		if ((str == "-inff") || (str == "+inff") || (str == "-inf")
					|| (str == "+inf") || (str == "nanf") || (str == "nan"))
			fromspecial(str);
		else
		{
			if (str.find('.') != std::string::npos)
				fval = false;
			dval = std::stod(str);
			fromdouble();
		}
	}
	catch(const std::exception& e)
	{
		if (str.length() == 1)
			fromchar(str);
		else
			frominvalid();
	}
}

Caster::Caster(const Caster& src)
{
	(void)src;
}

Caster::~Caster(void)	{}

/* ************************************************************************** */

Caster&		Caster::operator=(const Caster& src)
{
	(void)src;
	return *this;
}
/* ************************************************************************** */

void	Caster::fromchar(std::string str)
{

	if (str[0] > 31 && str[0] < 127)
		std::cout << "Char : " << static_cast<char>(dval) << std::endl;
	else
		std::cout << "Char : Non displayable" << std::endl;
	std::cout << "Int : " << static_cast<int>(str.c_str()[0]) << std::endl;
	std::cout << "Float : " << static_cast<float>(str.c_str()[0]) << ".0f" << std::endl;
	std::cout << "Double : " << static_cast<double>(str.c_str()[0]) << ".0" << std::endl;
	return ;
}

void	Caster::fromdouble(void)
{
	if (dval > INT32_MIN && dval < INT32_MAX)
		ival = true;
	std::cout.precision(7);
	if (dval > 31 && dval < 127)
		std::cout << "Char : " << static_cast<char>(dval) << std::endl;
	else
		std::cout << "Char : Non displayable" << std::endl;
	if (ival)
		std::cout << "Int : " << static_cast<int>(dval) << std::endl;
	else
		std::cout << "Int : Non displayable" << std::endl;
	if (!fval)
	{
		std::cout << "Float : " << static_cast<float>(dval) << "f" << std::endl;
		std::cout << "Double : " << dval << std::endl;
	}
	else
	{
		std::cout << "Float : " << static_cast<float>(dval) << ".0f" << std::endl;
		std::cout << "Double : " << dval << ".0" << std::endl;
	}
}

void	Caster::fromspecial(std::string str)
{
	if ((str == "nan") || (str == "nanf"))
	{
		std::cout << "Char : Impossible" << std::endl;
		std::cout << "Int : Impossibile" << std::endl;
		std::cout << "Float : nanf" << std::endl;
		std::cout << "Double : nan" << std::endl;
		return ;
	}
	else if ((str == "-inf") || (str == "-inff"))
	{
		std::cout << "Char : Impossible" << std::endl;
		std::cout << "Int : Impossibile" << std::endl;
		std::cout << "Float : -inff" << std::endl;
		std::cout << "Double : -inf" << std::endl;
		return ;
	}
	std::cout << "Char : Impossible" << std::endl;
	std::cout << "Int : Impossibile" << std::endl;
	std::cout << "Float : inff" << std::endl;
	std::cout << "Double : inf" << std::endl;
	return ;
}

void	Caster::frominvalid(void)
{
	std::cout << "Char : Impossible" << std::endl;
	std::cout << "Int : Impossibile" << std::endl;
	std::cout << "Float : Impossible" << std::endl;
	std::cout << "Double : Impossible" << std::endl;
}
