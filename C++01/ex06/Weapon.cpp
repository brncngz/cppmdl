

#include "Weapon.hpp"

void	Weapon::setType(std::string str)
{
	_type = str;
}

const	std::string&	Weapon::getType(void)
{
	return (_type);
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
}
