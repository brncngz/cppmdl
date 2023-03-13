

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
			NinjaTrap(void);
			NinjaTrap(std::string name);
			NinjaTrap(const NinjaTrap& src);
			~NinjaTrap(void);

			NinjaTrap& operator=(const NinjaTrap& src);

			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
			void	ninjaShoebox(NinjaTrap& trap);
			void	ninjaShoebox(ClapTrap& trap);
			void	ninjaShoebox(FragTrap& trap);
			void	ninjaShoebox(ScavTrap& trap);
	private:
			void	set_ep(int ep);
			void	set_mxep(void);
			void	set_dmg(int mad, int rad, int adr);
};

#endif
