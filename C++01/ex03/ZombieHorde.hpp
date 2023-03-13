
#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie	*_zombies;
	int		_num;
public:
	void	announce(void);
	ZombieHorde(int N);
	~ZombieHorde();
};

#endif
