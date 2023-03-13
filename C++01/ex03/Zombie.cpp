

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "<" << _name << "(" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
	return ;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}

void	Zombie::set_type(std::string type)
{
	_type = type;
}

Zombie::Zombie(void)
{
	_name = "";
	_type = "";
}

Zombie::~Zombie(void)
{}

#endif
