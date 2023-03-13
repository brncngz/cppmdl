

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		&_wp;
public:
	void	attack(void);
	void	setWeapon(Weapon wp);
	HumanA(std::string name, Weapon &wp);
	~HumanA(void);
};

#endif
