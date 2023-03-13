

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	public:
			ClapTrap(void);
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& src);
			~ClapTrap(void);

			void	set_name(std::string name);
			void	set_hp(int hp);
			void	set_mxhp(int mxp);
			void	set_lvl(void);
			void	set_ep(int ep);
			void	set_mxep(int mxep);
			void	set_dmg(int mad, int rad, int adr);

			unsigned int		get_hp(void) const;
			unsigned int		get_mxhp(void) const;
			unsigned int		get_ep(void) const;
			unsigned int		get_mxep(void) const;
			unsigned int		get_lvl(void) const;
			unsigned int		get_mad(void) const;
			unsigned int		get_rad(void) const;
			unsigned int		get_adr(void) const;
			std::string	get_name(void) const;

			ClapTrap&	operator=(const ClapTrap& src);

			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
	private:
			unsigned int		Hit_points;
			unsigned int		Max_hit_points;
			unsigned int		Energy_points;
			unsigned int		Max_energy_points;
			unsigned int		Level;
			unsigned int		Melee_attack_damage;
			unsigned int		Ranged_attack_damage;
			unsigned int		Armor_damage_reduction;
			std::string			Name;
};

#endif
