

#include "ZombieHorde.hpp"

void	ZombieHorde::announce(void)
{
	int i;

	for (i = 0; i < _num ; i++)
		_zombies[i].announce();
}

ZombieHorde::ZombieHorde(int N)
{
	srand(time(0));
	int			i;
	_zombies = new Zombie[N];
	_num = N;
	std::string	names[8] = {"Danilo", "Crisiano", "Umberto", "Mattia", "Andrea",
							"Giovo", "Flavio", "Ciro"};
	for (i = 0; i < N; i ++)
	{
		_zombies[i].set_name(names[rand() % 8]);
		_zombies[i].set_type("Horde");
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] _zombies;
}
