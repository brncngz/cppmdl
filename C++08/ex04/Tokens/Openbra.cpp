

#include "Openbra.hpp"


Openbra::Openbra(void)	{}

Openbra::Openbra(const Openbra& src)
{
	(void)src;
}

Openbra::~Openbra()	{}

Openbra&	Openbra::operator=(const Openbra& src)
{
	(void)src;
	return *this;
}

int		Openbra::getType(void) const
{
	return 3;
}

void	Openbra::print(void) const
{
	std::cout << "ParOpen";
}
