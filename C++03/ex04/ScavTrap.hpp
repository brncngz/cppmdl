

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
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
	protected:
			void	set_ep(void);
			void	set_mxep(void);
			void	set_dmg(void);
	private:
};

#endif
