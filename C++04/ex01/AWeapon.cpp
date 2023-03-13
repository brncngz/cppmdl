

#include "AWeapon.hpp"

	//	Constructors & Destructors
AWeapon::AWeapon(void) :
	name("No Weapon"), apcost(0), damage(0)	{}

AWeapon::AWeapon(std::string const& _name, int _apcost, int _dmg) :
	name(_name), apcost(_apcost), damage(_dmg) {}

AWeapon::AWeapon(const AWeapon& src)
{
	this->name = src.getName();
	this->apcost = src.getAPCost();
	this->damage = src.getDamage();
}

AWeapon::~AWeapon(void)	{}

/*===============================================*/
	//	Getter
std::string	const	AWeapon::getName() const
{
	return name;
}

int		AWeapon::getAPCost() const
{
	return apcost;
}

int		AWeapon::getDamage() const
{
	return damage;
}
/*===============================================*/
	//	Operator Overload
AWeapon&	AWeapon::operator=(const AWeapon& src)
{
	this->name = src.getName();
	this->apcost = src.getAPCost();
	this->damage = src.getDamage();
	return *this;
}
/*===============================================*/
	//	Member Funcion
void	AWeapon::attack() const
{}
/*===============================================*/
