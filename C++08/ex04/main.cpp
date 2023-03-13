

#include "Polander.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error \nUsage:	./Polander  \"some expression\" " << std::endl;
		return 1;
	}
	try
	{
		Polander	expr(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
