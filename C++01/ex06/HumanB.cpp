

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _wp->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wp)
{
	_wp = &wp;
}

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
}
