

#ifndef	ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <string>
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	public:
			AssaultTerminator(void);
			AssaultTerminator(std::string _name);
			AssaultTerminator(const AssaultTerminator& src);
			~AssaultTerminator(void);

			AssaultTerminator&	operator=(const AssaultTerminator& src);

			AssaultTerminator*	clone(void) const;
			void	battleCry(void) const;
			void	rangedAttack(void) const;
			void	meleeAttack(void) const;
	private:
			std::string name;
};

#endif
