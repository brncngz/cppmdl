/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:24:21 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/07 16:49:40 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <iomanip>

class Pony
{
	public:
			Pony(std::string name, std::string color, std::string age);
			~Pony(void);
			void	brush(std::string name);
	private:
			std::string	_name;
			std::string	_color;
			std::string	_age;
			bool		_clean;
};

#endif
