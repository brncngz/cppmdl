

#include <sstream>
#include "Intern.hpp"
#include "CentralBureaucracy.hpp"

std::string		makeRandomName(int size)
{
	static std::string const pool = "0123456789abcdefghijklmnopqrstuvwyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	static size_t poolsize = pool.length();
	std::stringstream ss;

	for (int i = 0; i < size; i++)
		ss << pool[rand() % poolsize];
	return ss.str();
}


int		main(void)
{
	srand(time(0));
	CentralBureaucracy	cb;
	Bureaucrat*	brctr[20];

	for (int i = 0; i < 20; i++)
		brctr[i] = new Bureaucrat(makeRandomName(15), (rand() % 150) +1);

	try
	{
		cb << *brctr[0] << *brctr[1];
		cb.feed(*brctr[2]);
		cb.feed(*brctr[3]);
		for (int i = 4; i < 20; i++)
			cb << *brctr[i];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		for (int i = 0; i < 15; i++)
			cb.queueUp(makeRandomName(rand() % 20 + 1));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		cb.doBureacracy();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < 20; i++)
		delete brctr[i];

	return (0);
}
