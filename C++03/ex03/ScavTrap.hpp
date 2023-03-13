

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
			ScavTrap(void);
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap& src);
			~ScavTrap(void);

			ScavTrap& operator=(const ScavTrap& src);

			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
			void	challengeNewcomer(std::string const & target);
	private:
			void	set_ep(int ep);
			void	set_mxep(void);
			void	set_dmg(int mad, int rad, int adr);
};

#endif
