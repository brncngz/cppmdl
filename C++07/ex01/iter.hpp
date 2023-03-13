/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:32:57 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/17 09:55:22 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T* _arr, size_t _len, void (*f)(const T&value))
{
	for (size_t i = 0; i < _len; i++)
		(*f)(_arr[i]);
}

template <typename T>
void	ft_print(const T& value)
{
	std::cout << value << " ";
}

#endif
