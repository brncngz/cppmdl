

#include "SuperMutant.hpp"

	//	Constructors & Destructor
SuperMutant::SuperMutant(void) :
	Enemy(170, "*Super Mutant*")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& src)
{
	this->hp = src.getHP();
	this->type = src.getType();
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{}

/*===============================================*/
	// Operator Overload
SuperMutant&	SuperMutant::operator=(const SuperMutant& src)
{
	this->hp = src.getHP();
	this->type = src.getType();
	return *this;
}
/*===============================================*/
	// Member Function
void	SuperMutant::takeDamage(int _n)
{
	if (_n - 3 <= 0)
		return;
	if ((this->hp -= (_n - 3)) <= 0)
	{
		this->hp = 0;
		std::cout << "Aaargh..." << std::endl;
	}
}
