

#include "AMateria.hpp"

AMateria::AMateria(std::string const & _type) :
	type(_type), xp(0)	{}


AMateria::~AMateria(void)	{}

std::string	const & AMateria::getType(void) const
{
	return this->type;
}

unsigned int AMateria::getXP(void) const
{
	return this->xp;
}

void	AMateria::use(ICharacter& _target)
{
	(void)_target;
	this->xp += 10;
}
