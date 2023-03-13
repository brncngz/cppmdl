/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:37:53 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 12:51:01 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	_setType = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*newZ;

	newZ = new Zombie;
	newZ->set_name(name);
	newZ->set_type(_setType);
	return newZ;
}

void	ZombieEvent::randomChump(void)
{
	Zombie		newZ;
	std::string	names[8] = {"Danilo", "Crisiano", "Umberto", "Mattia", "Andrea",
							"Giovo", "Flavio", "Ciro"};
	_setType = "random_name";
	newZ.set_name(names[rand() % 8]);
	newZ.set_type(_setType);
	newZ.announce();
}

ZombieEvent::ZombieEvent(void)
{
		srand(time(0));
}

ZombieEvent::~ZombieEvent(void)
{}
