

#ifndef	TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"
# include <string>
# include <iostream>

class TacticalMarine : public ISpaceMarine
{
	public:
			TacticalMarine(void);
			TacticalMarine(std::string _name);
			TacticalMarine(const TacticalMarine& src);
			~TacticalMarine(void);

			TacticalMarine&	operator=(const TacticalMarine& src);

			TacticalMarine*	clone(void) const;
			void	battleCry(void) const;
			void	rangedAttack(void) const;
			void	meleeAttack(void) const;
	private:
			std::string name;
};

#endif
