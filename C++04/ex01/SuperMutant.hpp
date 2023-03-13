

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
			SuperMutant(void);
			SuperMutant(const SuperMutant& src);
			~SuperMutant();

			SuperMutant&	operator=(const SuperMutant& src);

		void takeDamage(int _n);
	private:
};

#endif
