

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _wp.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon wp)
{
	_wp = wp;
}

HumanA::HumanA(std::string name, Weapon &wp) : _wp(wp)
{
	_name = name;
}

HumanA::~HumanA(void)
{
}
