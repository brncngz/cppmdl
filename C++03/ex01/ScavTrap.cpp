
#include "ScavTrap.hpp"

	//	Constructors & Destructor
ScavTrap::ScavTrap(void)
{
	srand(time(0));
	set_hp(100);
	set_mxhp();
	set_ep(50);
	set_mxep();
	set_lvl();
	set_dmg(20, 15, 3);
	Name = "SC4V_Tr4p";
	std::cout << "Default Constructor called, now There's a new SC4V_Tr4p !" << std::endl;
}

ScavTrap::ScavTrap(std::string	name)
{
	srand(time(0));
	set_hp(100);
	set_mxhp();
	set_ep(50);
	set_mxep();
	set_lvl();
	set_dmg(20, 15, 3);
	Name = name;
	std::cout << "Constructor called, new SC4V named >" << Name << "< created !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	srand(time(0));
	Hit_points = src.get_hp();
	Max_hit_points = src.get_mxhp();
	Energy_points = src.get_ep();
	Max_energy_points =src.get_mxep();
	Level = src.get_lvl();
	Melee_attack_damage = src.get_mad();
	Ranged_attack_damage = src.get_rad();
	Armor_damage_reduction = src.get_adr();
	Name = src.get_name() + "_cp";
	std::cout << "Copy Constructor called, now there's <" << src.get_name() << "> and <";
	std::cout << Name << "> !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Dismantling -> " << Name << std::endl;
}

/*=======================================================*/
		// Setter & Getter
void	ScavTrap::set_hp(int hp)
{
	Hit_points = hp;
}

void	ScavTrap::set_mxhp(void)
{
	Max_hit_points = 100;
}

void	ScavTrap::set_ep(int ep)
{
	Energy_points = ep;
}

void	ScavTrap::set_mxep(void)
{
	Max_energy_points = 50;
}

void	ScavTrap::set_lvl(void)
{
	Level = 1;
}

void	ScavTrap::set_dmg(int mad, int rad, int adr)
{
	Melee_attack_damage  = mad;
	Ranged_attack_damage = rad;
	Armor_damage_reduction = adr;
}

unsigned int		ScavTrap::get_hp(void) const
{
	return (Hit_points);
}

unsigned int		ScavTrap::get_mxhp(void) const
{
	return (Max_hit_points);
}

unsigned int		ScavTrap::get_ep(void) const
{
	return (Energy_points);
}

unsigned int		ScavTrap::get_mxep(void) const
{
	return (Max_energy_points);
}

unsigned int		ScavTrap::get_lvl(void) const
{
	return (Level);
}

unsigned int		ScavTrap::get_mad(void) const
{
	return (Melee_attack_damage);
}

unsigned int		ScavTrap::get_rad(void) const
{
	return (Ranged_attack_damage);
}

unsigned int		ScavTrap::get_adr(void) const
{
	return (Armor_damage_reduction);
}

std::string		ScavTrap::get_name(void) const
{
	return (Name);
}
/*=======================================================*/
	// Operator Overload
ScavTrap&	ScavTrap::operator=(const ScavTrap& src)
{
	Hit_points = src.get_hp();
	Max_hit_points = src.get_mxhp();
	Energy_points = src.get_ep();
	Max_energy_points =src.get_mxep();
	Level = src.get_lvl();
	Melee_attack_damage = src.get_mad();
	Ranged_attack_damage = src.get_rad();
	Armor_damage_reduction = src.get_adr();
	Name = src.get_name();
	return *this;
}
/*=======================================================*/
	// Member Funcions
void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP <" << get_name() << "> firing to <" << target;
	std::cout << "> with the rocket launcher, causing <" << get_rad() << "> damages point !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP <" << get_name() << "> draw a sword hit <" << target;
	std::cout << "> , causing <" << get_mad() << "> damages point !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int hp;

	hp = get_hp();
	hp -= amount - get_adr();
	if (hp > 0)
	{
		set_hp(hp);
		std::cout << "SC4V-TP <" << get_name() << "> is taking damage";
		std::cout << ", it's armor reduce the damage to <" << amount - get_adr() << "> damages !" << std::endl;
	}
	else
	{
		set_hp(0);
		std::cout << "SC4V-TP <" << get_name() << "> is taking damage";
		std::cout << " <" << get_mxhp() << "> damages !\n";
		std::cout << "<" << get_name() << ">'s hp is 0!" << std::endl;
		std::cout << get_name() << ":.....*disassembles in the background*..." << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int hp;

	hp = get_hp();
	if ((hp + amount ) <= get_mxhp())
	{
		set_hp(hp + amount);
		std::cout << "<" << get_name() << "> is Repairing itself !.";
		std::cout << ".. <" << amount << "> hp gained !" << std::endl;
	}
	else
	{
		set_hp(get_mxhp());
		std::cout << "<" << get_name() << "> is Repairing...";
		std::cout << "can't repair more than.. <" << get_mxhp() - hp << "> full Hp now !" << std::endl;
	}
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	chllg[5] = {"Burp race", "Death Challenge", "The first who laugh Lose",
										"Gunfighter duel", "Squat Challenge"};
	int		nrg;

	nrg = get_ep();
	if (nrg >= 25)
	{
		set_ep(nrg - 25);
		std::cout << "SC4V_TP <" << get_name() << "> challenge <";
		std::cout << target << "> to <" << chllg[rand() % 5] << "> !" << std::endl;
	}
	else
		std::cout << "SC4V_TP <" << get_name() << "> is out of energy!" << std::endl;
}
