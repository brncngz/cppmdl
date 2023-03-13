
#ifndef FIRE_HPP
# define FIRE_HPP

# include "AMateria.hpp"

class Fire : public AMateria
{
	public:
		Fire(void);
		Fire(const Fire& src);
		~Fire(void);

		Fire&	operator=(const Fire& src);

		AMateria* clone(void) const;
		void	use(ICharacter& _target);
};

#endif
