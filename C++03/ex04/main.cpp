

#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	FragTrap	def;
	FragTrap	mario("mario");

	FragTrap	cp_mario(mario);
	FragTrap	sw_name("Franco");

	ScavTrap	std;
	ScavTrap	one("Mr.One");
	ScavTrap	one_cp(one);

	NinjaTrap	nin;
	NinjaTrap	shi("Hattori Hanzo");

	SuperTrap	sup;
	SuperTrap	nm("Super");

	def.meleeAttack(sw_name.get_name());
	sw_name.takeDamage(def.get_mad());

	cp_mario.rangedAttack(mario.get_name());
	mario.takeDamage(cp_mario.get_rad());

	mario.vaulthunter_dot_exe(cp_mario.get_name());
	mario.vaulthunter_dot_exe(sw_name.get_name());
	mario.vaulthunter_dot_exe(def.get_name());

	cp_mario.takeDamage(150);
	mario.beRepaired(25);
	sw_name.beRepaired(25);

	one.meleeAttack(sw_name.get_name());
	one_cp.rangedAttack(def.get_name());

	one.challengeNewcomer(mario.get_name());
	one.takeDamage(98);
	one.beRepaired(15);
	mario.meleeAttack(one.get_name());
	one.takeDamage(mario.get_mad());

	one_cp.challengeNewcomer(sw_name.get_name());

	shi.ninjaShoebox(one);
	shi.ninjaShoebox(mario);
	shi.ninjaShoebox(nin);

	nm.ninjaShoebox(one);
	nm.vaulthunter_dot_exe("Stroll");

}
