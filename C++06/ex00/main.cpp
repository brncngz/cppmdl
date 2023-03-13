

#include "Caster.hpp"

int		main(int ac, char **av)
{
	std::string str;
	if (ac == 2)
	{
		str = av[1];
		Caster a(str);
	}
	else
		return 1;
	return 0;
}
