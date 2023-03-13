

#include "Cure.hpp"


/* ************************************************************************** */
	//	Constructors & Destructor
Cure::Cure(void) :
	AMateria("cure")	{}

Cure::Cure(const Cure& src) :
	AMateria("cure")
{
	this->xp = src.xp;
}

Cure::~Cure()
{}

/* ************************************************************************** */
	//	Operation Overload
Cure&	Cure::operator=(const Cure& src)
{
	this->xp = src.xp;
	return *this;
}

/* ************************************************************************** */
	//	Member Funcion
AMateria*	Cure::clone(void) const
{
	Cure *copy = new Cure(*this);
	return copy;
}

void	Cure::use(ICharacter& _target)
{
	AMateria::use(_target);
	std::cout << "* heals " << _target.getName() << "'s wounds *" << std::endl;
}
