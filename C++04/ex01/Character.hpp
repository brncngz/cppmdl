

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "SuperMutant.hpp"
# include "RadScorpion.hpp"

class Character
{
	public:
			Character(void);
			Character(std::string const & _name);
			Character(const Character& src);
			~Character(void);

			Character&	operator=(const Character& src);

			int		getAp(void) const;
			std::string	getWpName(void) const;

			void	recoverAP(void);
			void	equip(AWeapon* _wp);
			void	attack(Enemy* _enemy);
			std::string const getName() const;
	private:
		std::string	name;
		int		Ap;
		AWeapon	*ptr;
};

std::ostream&	operator<<(std::ostream& stream, const Character& src);

#endif
