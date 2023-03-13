
#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde *horde;

	horde = new ZombieHorde(8);
	horde->announce();

	delete horde;

	horde = new ZombieHorde(1);
	horde->announce();
	delete horde;

	return (0);
}
