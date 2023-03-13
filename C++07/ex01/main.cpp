/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:40:35 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/17 10:01:36 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int		main(void)
{
	int i_arr[5] = {0, 1, 2, 3, 4};
	bool b[2] = {false, true};
	std::string str[5] = {"prova", "di", "funzionamento", "template", "con funzione"};

	::iter(str, 5, &ft_print);
	std::cout << std::endl;

	::iter(b, 2, &ft_print);
	std::cout << std::endl;

	::iter(i_arr, 5, &ft_print);
	std::cout << std::endl;

	return 0;
}
