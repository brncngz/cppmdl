/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:21:51 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 12:37:54 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class	ZombieEvent
{
	public:
			void	setZombieType(std::string type);
			void	randomChump(void);
			Zombie*	newZombie(std::string name);
			ZombieEvent(void);
			~ZombieEvent(void);

	private:
		std::string	_setType;
};

#endif
