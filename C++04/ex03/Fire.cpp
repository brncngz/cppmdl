

#include "Fire.hpp"


/* ************************************************************************** */
	//	Constructors & Destructor
Fire::Fire(void) :
	AMateria("fire")	{}

Fire::Fire(const Fire& src) :
	AMateria("fire")
{
	this->xp = src.xp;
}

Fire::~Fire()
{}

/* ************************************************************************** */
	//	Operation Overload
Fire&	Fire::operator=(const Fire& src)
{
	this->xp = src.xp;
	return *this;
}

/* ************************************************************************** */
	//	Member Funcion
AMateria*	Fire::clone(void) const
{
	Fire *copy = new Fire(*this);
	return copy;
}

void	Fire::use(ICharacter& _target)
{
	AMateria::use(_target);
	std::cout << "* Slam a Fire ball at " << _target.getName() << " *" << std::endl;
}
