

#include "Pony.hpp"

void	Pony::brush(std::string name)
{
	if (name != _name)
	{
		std::cout << "There's not a Pony named" << name << std::endl;
		return ;
	}
	if (!_clean)
	{
		std::cout << "Brushing " << name << "...it like's it!";
		_clean = 1;
	}
	else
		std::cout << name << "is already clean, try later" << std::endl;
	return;
}

Pony::Pony(std::string name, std::string color, std::string age)
{
	_name = name;
	_color = color;
	_age = age;
	_clean = false;
	std::cout << "There's a new Pony named:" << name << std::endl;
}

Pony::~Pony(void)
{
	std::cout << _name << " goes away free in the wild" << std::endl;
}
