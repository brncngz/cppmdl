/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:17:13 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 12:40:26 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <ctime>

class	Zombie
{
	public:
			Zombie(void);
			~Zombie(void);
			void	announce(void);
			void	set_type(std::string type);
			void	set_name(std::string name);
	private:
			std::string	_type;
			std::string	_name;
};

#endif
