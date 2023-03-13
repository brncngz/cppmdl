/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:36:40 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 17:00:35 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat	boss("boss", 2);
	Bureaucrat	empl("stupid", 150);

	try
	{
		//	Errore grado
		Bureaucrat	err("err", 160);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

		Form	f1("2c", 150, 120);
	try
	{
		Form _fer("3a", 70, 40);
		f1 = _fer;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form	f2("wrg", 155, 1);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Form	f3("2b", 2, 1);

		std::cout << boss << empl << std::endl;
	try
	{
		boss.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << boss << empl << f1 << f3 << std::endl;
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
		empl.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		f1.beSigned(empl);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		f3.beSigned(boss);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << boss << empl << f1 << f3 << std::endl;
		empl.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << boss << empl << std::endl;
		empl.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		empl.incrementGrade();
		std::cout << boss << empl << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
