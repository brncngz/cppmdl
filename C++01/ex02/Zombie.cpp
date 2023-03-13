/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:11:07 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 12:40:32 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "<" << _name << "(" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
	return ;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}

void	Zombie::set_type(std::string type)
{
	_type = type;
}

Zombie::Zombie(void)
{
	_name = "";
	_type = "";
}

Zombie::~Zombie(void)
{}
