

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string const & name);
		Character(const Character& src);
		~Character(void);

		Character&	operator=(const Character& src);
		std::string const & getName(void) const;
		void	equip(AMateria* _m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& _target);

	private:
		Character(void);

		std::string name;
		int			equipped;
		AMateria	*inventory[4];

};

#endif
