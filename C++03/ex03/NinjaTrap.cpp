

#include "NinjaTrap.hpp"

	//	Constructors & Destructor
NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	set_hp(60);
	set_mxhp(60);
	set_ep(120);
	set_mxep();
	set_dmg(60, 5, 0);
	std::cout << "Creating a new Ninja Trap!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	set_hp(60);
	set_mxhp(60);
	set_ep(120);
	set_mxep();
	set_dmg(60, 5, 0);
	std::cout << "There's a new Ninja called <" << get_name() << "> around, but maibe you can't see it" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& src) : ClapTrap(src)
{
	std::cout << "Copy Constructor called, now there's two invisible <" << get_name() << "> !" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destroing this Ninja <" << get_name() << "> " << std::endl;
}
/*=======================================================*/
	//	Setter & Getter
void	NinjaTrap::set_ep(int ep)
{
	ClapTrap::set_ep(ep);
}

void	NinjaTrap::set_mxep(void)
{
	ClapTrap::set_mxep(120);
}

void	NinjaTrap::set_dmg(int mad, int rad, int adr)
{
	ClapTrap::set_dmg(mad, rad, adr);
}
/*=======================================================*/
	//	Operation Overload
NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& src)
{
	ClapTrap::set_hp(src.get_hp());
	ClapTrap::set_mxhp(100);
	ClapTrap::set_ep(src.get_ep());
	ClapTrap::set_mxep(src.get_mxep());
	ClapTrap::set_lvl();
	ClapTrap::set_dmg(src.get_mad(), src.get_rad(), src.get_adr());
	ClapTrap::set_name(src.get_name());
	return *this;
}
/*=======================================================*/
	// Member Functions
void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "Ninja-TP <" << get_name() << "> attacks <" << target;
	std::cout << "> whith shuriken, causing <" << get_rad() << "> damages point !" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ninja-TP <" << get_name() << "> hit with the Wakizashi <" << target;
	std::cout << "> , causing <" << get_mad() << "> damages point !" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap& trap)
{
	if (trap.get_hp() <= 0)
	{
		std::cout << "<" << trap.get_name() << ">'s Hp is dead, I don't want to Rage on..." << std::endl;
		return ;
	}
	if ((rand() % 100) > 70)
	{
		std::cout << "After focusing <" << this->get_name() << "> Trow a shuriken at <" << trap.get_name();
		std::cout << "> and damage him for <" << this->get_rad() << "> !" << std::endl;
	}
	else
		std::cout << "<" << this->get_name() << "> Trow Shuriken at <" << trap.get_name();
		std::cout << "> but misses, Ninjas is difficult to hit" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap& trap)
{
	if (trap.get_hp() <= 0)
	{
		std::cout << "<" << trap.get_name() << ">'s Hp is dead, I don't want to Rage on..." << std::endl;
		return ;
	}
	if (this->get_ep() >= 50)
	{
		this->set_ep(get_ep() - 50);
		std::cout << "<" << this->get_name() << "> Swing a katana hit at <" << trap.get_name();
		std::cout << "> damaging him for <" << this->get_mad() << "> !" << std::endl;
		trap.takeDamage(this->get_mad());
	}
	else
		std::cout << "*more energy needed*, no attack performed" << std::endl;
}
void	NinjaTrap::ninjaShoebox(FragTrap& trap)
{
	if (trap.get_hp() <= 0)
	{
		std::cout << "<" << trap.get_name() << ">'s Hp is dead, I don't want to Rage on..." << std::endl;
		return ;
	}
	if (this->get_ep() >= 25)
	{
		this->set_ep(get_ep() - 25);
		std::cout << "<" << this->get_name() << "> Trow a Kunai at <" << trap.get_name();
		std::cout << "> damaging him for <" << this->get_rad() << "> !" << std::endl;
		trap.takeDamage(this->get_rad());
	}
	else
		std::cout << "*more energy needed*, no attack performed" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap& trap)
{
	if (trap.get_hp() <= 0)
	{
		std::cout << "<" << trap.get_name() << ">'s Hp is dead, I don't want to Rage on..." << std::endl;
		return ;
	}
	if (this->get_ep() >= 25)
	{
		this->set_ep(get_ep() - 25);
		std::cout << "<" << this->get_name() << "> Trow a Smoke-bomb at <" << trap.get_name();
		std::cout << "> damaging him for <" << this->get_rad() << "> !" << std::endl;
		trap.takeDamage(this->get_rad());
	}
	else
		std::cout << "*more energy needed*, no attack performed" << std::endl;
}
