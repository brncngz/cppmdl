

#include "FragTrap.hpp"

	//	Constructors & Destructor
FragTrap::FragTrap(void) : ClapTrap()
{
	set_ep(100);
	set_mxep();
	set_dmg(30, 20, 5);
	std::cout << "Default Constructor called, Welcome Fr4g_Tr4p !" << std::endl;
}

FragTrap::FragTrap(std::string	name) : ClapTrap(name)
{
	set_ep(100);
	set_mxep();
	set_dmg(30, 20, 5);
	std::cout << "Constructor called, Welcome " << get_name() << " !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
	std::cout << "Copy Constructor called, now there's two " << get_name() << " !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called on " << get_name() << std::endl;
}

/*=======================================================*/
		// Setter & Getter
void	FragTrap::set_ep(int ep)
{
	ClapTrap::set_ep(ep);
}

void	FragTrap::set_mxep(void)
{
	ClapTrap::set_mxep(100);
}

void	FragTrap::set_dmg(int mad, int rad, int adr)
{
	ClapTrap::set_dmg(mad, rad, adr);
}
/*=======================================================*/
	// Operator Overload
FragTrap&	FragTrap::operator=(const FragTrap& src)
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
	// Member Funcions
void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << get_name() << "> attacks <" << target;
	std::cout << "> at range, causing <" << get_rad() << "> damages point !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << get_name() << "> charge in melee <" << target;
	std::cout << "> , causing <" << get_mad() << "> damages point !" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	atks[5] = {"Flirting", "Ticking", "Funny Face", "Pinching", "Tricking"};
	int		nrg;

	nrg = get_ep();
	if (nrg >= 25)
	{
		set_ep(nrg - 25);
		std::cout << "FR4G_TP <" << get_name() << "> uses : <";
		std::cout << atks[rand() % 5] << "> on <" << target << "> !" << std::endl;
	}
	else
		std::cout << "FR4G_TP <" << get_name() << "> is out of energy!" << std::endl;
}
