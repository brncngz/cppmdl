

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
			SuperTrap(void);
			SuperTrap(std::string name);
			SuperTrap(const SuperTrap& src);
			~SuperTrap(void);

			SuperTrap& operator=(const SuperTrap& src);

			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
	private:
};

#endif
