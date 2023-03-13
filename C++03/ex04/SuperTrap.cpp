

#include "SuperTrap.hpp"

	//	Constructors & Destructor
SuperTrap::SuperTrap(void) : ClapTrap()
{
	NinjaTrap::set_ep();
	NinjaTrap::set_mxep();
	ClapTrap::set_dmg(60, 20, 5);
	std::cout << "Creating a brand new Standard Super Trap !" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name)
{
	NinjaTrap::set_ep();
	NinjaTrap::set_mxep();
	ClapTrap::set_dmg(60, 20, 5);
	std::cout << "Super Trap named <" << name << "> is born" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& src) : ClapTrap(src)
{
	NinjaTrap::set_ep();
	NinjaTrap::set_mxep();
	ClapTrap::set_dmg(60, 20, 5);
	std::cout << "Super Trap successfully copied !" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Super Trap <" << get_name() << "> destroyed" << std::endl;
}
/*=======================================================*/
	// Operator Overload
SuperTrap& SuperTrap::operator=(const SuperTrap& src)
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
void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
