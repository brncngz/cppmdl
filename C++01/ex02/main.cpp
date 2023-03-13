

#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent	zt;
	Zombie		*first;

	zt.setZombieType("my_Z");
	first = zt.newZombie("mario");
	first->announce();
	delete first;

	first = zt.newZombie("alfredo");
	first->announce();
	delete first;

	for (int i = 0; i < 4 ; i++)
		zt.randomChump();
	return (0);
}
