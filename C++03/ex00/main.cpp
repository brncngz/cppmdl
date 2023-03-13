/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:59:35 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/11 11:55:41 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	def;
	FragTrap	mario("mario");

	FragTrap	cp_mario(mario);
	FragTrap	sw_name("Franco");

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
}
