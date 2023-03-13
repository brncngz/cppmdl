

#include "Closedbra.hpp"

Closedbra::Closedbra(void)	{}

Closedbra::Closedbra(const Closedbra& src)
{
	(void)src;
}

Closedbra::~Closedbra()	{}

Closedbra&	Closedbra::operator=(const Closedbra& src)
{
	(void)src;
	return *this;
}

int		Closedbra::getType(void) const
{
	return 4;
}

void	Closedbra::print(void) const
{
	std::cout << "ParClose";
}
