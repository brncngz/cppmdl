

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_wp;
public:
	void	attack(void);
	void	setWeapon(Weapon &wp);
	HumanB(std::string name);
	~HumanB(void);
};

#endif
