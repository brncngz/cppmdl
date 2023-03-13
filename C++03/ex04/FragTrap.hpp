

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
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
	protected:
			void	set_ep(void);
			void	set_mxep(void);
			void	set_dmg(void);
	private:
};

#endif
