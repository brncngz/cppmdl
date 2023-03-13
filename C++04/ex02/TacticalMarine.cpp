

#include "TacticalMarine.hpp"

/* ************************************************************************** */
	//	Constructors & Destructor
TacticalMarine::TacticalMarine(void) :
	name("")
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}


TacticalMarine::TacticalMarine(std::string _name) :
	name(_name)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}


TacticalMarine::TacticalMarine(const TacticalMarine& src) :
	name(src.name)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
}

/* ************************************************************************** */
	//	Operator Overload
TacticalMarine&		TacticalMarine::operator=(const TacticalMarine& src)
{
	this->name = src.name;
	return *this;
}

/* ************************************************************************** */
	//	Member Functions
TacticalMarine*		TacticalMarine::clone(void) const
{
	TacticalMarine *copy = new TacticalMarine(*this);

	return copy;
}

void	TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
