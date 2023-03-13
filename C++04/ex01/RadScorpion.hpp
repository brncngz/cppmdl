

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
			RadScorpion(void);
			RadScorpion(const RadScorpion& src);
			~RadScorpion();

			RadScorpion&	operator=(const RadScorpion& src);

			void takeDamage(int _n);
	private:
};

#endif
