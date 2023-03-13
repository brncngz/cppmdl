

#include "PlasmaRifle.hpp"

	//	Constructor & Destructor
PlasmaRifle::PlasmaRifle(void) :
	AWeapon("*Plasma Rifle*", 5, 21)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& src) :
	AWeapon(src)
{}

PlasmaRifle::~PlasmaRifle(void)
{}
/*===============================================*/
	//	Operator Override
PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle & src)
{
	this->name = src.getName();
	this->apcost = src.getAPCost();
	this->damage = src.getDamage();
	return *this;
}
/*===============================================*/
	//	Member function
void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
