

#ifndef	MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <string>

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& src);
		~MateriaSource(void);

		MateriaSource&	operator=(const MateriaSource& src);

		void		learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const & type);
	private:
		int			amount;
		AMateria	*sources[4];
};

#endif
