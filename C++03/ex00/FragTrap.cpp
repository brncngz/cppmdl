/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:59:14 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/11 12:31:04 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

	//	Constructors & Destructor
FragTrap::FragTrap(void)
{
	srand(time(0));
	set_hp(100);
	set_mxhp();
	set_ep(100);
	set_mxep();
	set_lvl();
	set_dmg(30, 20, 5);
	Name = "Fr4g_Tr4p";
	std::cout << "Default Constructor called, Welcome Fr4g_Tr4p !" << std::endl;
}

FragTrap::FragTrap(std::string	name)
{
	srand(time(0));
	set_hp(100);
	set_mxhp();
	set_ep(100);
	set_mxep();
	set_lvl();
	set_dmg(30, 20, 5);
	Name = name;
	std::cout << "Constructor called, Welcome " << Name << " !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src)
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
	std::cout << "Copy Constructor called, now there's two " << Name << " !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called on " << Name << std::endl;
}

/*=======================================================*/
		// Setter & Getter
void	FragTrap::set_hp(int hp)
{
	Hit_points = hp;
}

void	FragTrap::set_mxhp(void)
{
	Max_hit_points = 100;
}

void	FragTrap::set_ep(int ep)
{
	Energy_points = ep;
}

void	FragTrap::set_mxep(void)
{
	Max_energy_points = 100;
}

void	FragTrap::set_lvl(void)
{
	Level = 1;
}

void	FragTrap::set_dmg(int mad, int rad, int adr)
{
	Melee_attack_damage  = mad;
	Ranged_attack_damage = rad;
	Armor_damage_reduction = adr;
}

unsigned int		FragTrap::get_hp(void) const
{
	return (Hit_points);
}

unsigned int		FragTrap::get_mxhp(void) const
{
	return (Max_hit_points);
}

unsigned int		FragTrap::get_ep(void) const
{
	return (Energy_points);
}

unsigned int		FragTrap::get_mxep(void) const
{
	return (Max_energy_points);
}

unsigned int		FragTrap::get_lvl(void) const
{
	return (Level);
}

unsigned int		FragTrap::get_mad(void) const
{
	return (Melee_attack_damage);
}

unsigned int		FragTrap::get_rad(void) const
{
	return (Ranged_attack_damage);
}

unsigned int		FragTrap::get_adr(void) const
{
	return (Armor_damage_reduction);
}

std::string		FragTrap::get_name(void) const
{
	return (Name);
}
/*=======================================================*/
	// Operator Overload
FragTrap&	FragTrap::operator=(const FragTrap& src)
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

void	FragTrap::takeDamage(unsigned int amount)
{
	int hp;

	hp = get_hp();
	hp -= amount - get_adr();
	if (hp > 0)
	{
		set_hp(hp);
		std::cout << "FR4G-TP <" << get_name() << "> is taking damage";
		std::cout << ", thaks to armor get <" << amount - get_adr() << "> damages !" << std::endl;
	}
	else
	{
		set_hp(0);
		std::cout << "FR4G-TP <" << get_name() << "> is taking damage";
		std::cout << " <" << get_mxhp() << "> damages !\n";
		std::cout << "<" << get_name() << ">'s hp is 0!" << std::endl;
		std::cout << get_name() << ":.....*is gone now*..." << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	unsigned int hp;

	hp = get_hp();
	if ((hp + amount ) <= get_mxhp())
	{
		set_hp(hp + amount);
		std::cout << "Repairing <" << get_name() << ">...";
		std::cout << ".. <" << amount << "> hp gained !" << std::endl;
	}
	else
	{
		set_hp(get_mxhp());
		std::cout << "Repairing <" << get_name() << ">...";
		std::cout << "can't repair more than.. <" << get_mxhp() - hp << "> full Hp now !" << std::endl;
	}
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
