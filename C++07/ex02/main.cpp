/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 10:41:40 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/17 11:28:05 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Array<int>	int_empty;

	Array<int>	int_full(5);
	for (size_t i = 0; i < int_empty.size(); i++)
	{
		int_empty[i] = i;
		std::cout << int_empty[i] << "*empty*";
	}
	std::cout << int_empty.size() << std::endl << std::endl;

	for (size_t i = 0; i < int_full.size(); i++)
		std::cout << int_full[i] << " ";
	std::cout << std::endl;

	Array<float> fl_arr(25);
	for (size_t i = 0; i < fl_arr.size(); i++)
		std::cout << fl_arr[i] << "f ";
	std::cout << std::endl;

	Array<std::string> str(5);
	for (size_t i = 0; i < str.size(); i++)
		std::cout << str[i] << " *empty* " << std::endl;
	for (size_t i = 0; i < str.size(); i++)
	{
		str[i] = std::to_string(i);
		std::cout << str[i] << " ";
	}
	std::cout << std::endl;


	try
	{
		int_full[-1] = 3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		int_full[7] = 3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
