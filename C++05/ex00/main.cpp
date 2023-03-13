

#include "Bureaucrat.hpp"

int		main(void)
{
		Bureaucrat	boss("boss", 2);
		Bureaucrat	empl("stupid", 150);
	try
	{
		Bureaucrat	err("err", 160);
		std::cout << err << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << boss << empl << std::endl;
		boss.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << boss << empl << std::endl;
		boss.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << boss << empl << std::endl;
		boss.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << boss << empl << std::endl;
		boss.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << boss << empl << std::endl;
		boss.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << boss << empl << std::endl;
		boss.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
