/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:16:45 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/09 09:42:43 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_capitalize(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(int ac, char **av)
{
	char c;
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
				for (int j = 0; av[i][j] != 0; j++)
			{
				c = ft_capitalize(av[i][j]);
				std::cout << c;
			}
			std::cout << " ";
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}
