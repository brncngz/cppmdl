

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

class MiningBarge
{
	public:
		MiningBarge(void);
		MiningBarge(const MiningBarge& src);
		~MiningBarge(void);

		MiningBarge&	operator=(const MiningBarge& src);
		void equip(IMiningLaser *);
		void mine(IAsteroid*) const;

	private:
		int				equipped;
		IMiningLaser	*lasers[4];
};

#endif
