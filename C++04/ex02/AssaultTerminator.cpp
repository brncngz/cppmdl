

#include "AssaultTerminator.hpp"

/* ************************************************************************** */
	//	Constructors & Destructor
AssaultTerminator::AssaultTerminator(void) :
	name("")
{
	std::cout << "* teleports from space *" << std::endl;
}


AssaultTerminator::AssaultTerminator(std::string _name) :
	name(_name)
{
	std::cout << "* teleports from space *" << std::endl;
}


AssaultTerminator::AssaultTerminator(const AssaultTerminator& src) :
	name(src.name)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back..." << std::endl;
}

/* ************************************************************************** */
	//	Operator Overload
AssaultTerminator&		AssaultTerminator::operator=(const AssaultTerminator& src)
{
	this->name = src.name;
	return *this;
}

/* ************************************************************************** */
	//	Member Functions
AssaultTerminator*		AssaultTerminator::clone(void) const
{
	AssaultTerminator *copy = new AssaultTerminator(*this);

	return copy;
}

void	AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
