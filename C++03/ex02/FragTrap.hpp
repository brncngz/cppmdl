

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
			FragTrap(void);
			FragTrap(std::string name);
			FragTrap(const FragTrap& src);
			~FragTrap(void);

			FragTrap& operator=(const FragTrap& src);

			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
			void	vaulthunter_dot_exe(std::string const & target);
	private:
			void	set_ep(int ep);
			void	set_mxep(void);
			void	set_dmg(int mad, int rad, int adr);
};

#endif
