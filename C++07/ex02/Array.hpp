/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 10:08:52 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/17 11:41:24 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cctype>
# include <exception>

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int _n);
		Array(const Array<T>& src);
		~Array(void);

		Array&	operator=(const Array& src);
		T&		operator[](int i) const ;

		class OutOfLimits : public std::exception
		{
			virtual const char* what() const throw();
		};

		size_t	size(void) const;
	private:
		T*		obj;
		size_t	sz;
};

# include "Array.cpp"

#endif
