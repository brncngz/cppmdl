/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:52:15 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/11 12:31:00 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap
{
	public:
			FragTrap(void);
			FragTrap(std::string name);
			FragTrap(const FragTrap& src);
			~FragTrap(void);

			FragTrap& operator=(const FragTrap& src);


			unsigned int		get_hp(void) const;
			unsigned int		get_mxhp(void) const;
			unsigned int		get_ep(void) const;
			unsigned int		get_mxep(void) const;
			unsigned int		get_lvl(void) const;
			unsigned int		get_mad(void) const;
			unsigned int		get_rad(void) const;
			unsigned int		get_adr(void) const;
			std::string	get_name(void) const;

			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			void	vaulthunter_dot_exe(std::string const & target);
	private:
			int		Hit_points;
			int		Max_hit_points;
			int		Energy_points;
			int		Max_energy_points;
			int		Level;
			int		Melee_attack_damage;
			int		Ranged_attack_damage;
			int		Armor_damage_reduction;
			std::string	Name;

			void	set_hp(int hp);
			void	set_mxhp(void);
			void	set_ep(int ep);
			void	set_mxep(void);
			void	set_lvl(void);
			void	set_dmg(int mad, int rad, int adr);
};

#endif
