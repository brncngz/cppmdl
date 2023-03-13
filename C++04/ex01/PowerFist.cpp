

#include "PowerFist.hpp"

	//	Constructor & Destructor
PowerFist::PowerFist(void) :
	AWeapon("*Power Fist*", 8, 50)
{}

PowerFist::PowerFist(const PowerFist& src) :
	AWeapon(src)
{}

PowerFist::~PowerFist(void)
{}
/*===============================================*/
	//	Operator Override
PowerFist&	PowerFist::operator=(const PowerFist & src)
{
	this->name = src.getName();
	this->apcost = src.getAPCost();
	this->damage = src.getDamage();
	return *this;
}
/*===============================================*/
	//	Member function
void	PowerFist::attack() const
{
	std::cout << "* pschh    SBAM! *" << std::endl;
}
