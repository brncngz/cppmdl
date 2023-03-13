

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& src);
		~Ice(void);

		Ice&	operator=(const Ice& src);

		AMateria* clone(void) const;
		void	use(ICharacter& _target);
};

#endif
