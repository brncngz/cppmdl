/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 11:22:35 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/17 11:41:47 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) :
	obj(0), sz(0)	{}

template <typename T>
Array<T>::Array(unsigned int _n) :
	sz(_n)
{
	obj = new T[_n];
}

template <typename T>
Array<T>::Array(const Array& src) :
	sz(src.sz)
{
	if (sz)
	{
		obj = new T[sz];
		for (size_t i = 0; i < sz; i++)
			obj[i] = src.obj[i];
	}
}

template <typename T>
Array<T>::~Array(void)
{
	if (sz > 0)
		delete [] obj;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& src)
{
	if (sz)
		delete [] obj;
	obj = 0;
	sz = src.sz;
	if (sz)
	{
		obj = new T[sz];
		for (size_t i = 0; i < sz; i++)
			obj[i] = src.obj[i];
	}
	return *this;
}

template <typename T>
T&	Array<T>::operator[](int i) const
{
	if (i < 0 || static_cast<size_t>(i) >= sz)
		throw Array::OutOfLimits();
	else
		return obj[i];
}

template <typename T>
size_t	Array<T>::size(void) const
{
	return sz;
}
template <typename T>
const char* Array<T>::OutOfLimits::what() const throw()
{
	return "Exception: Out of limits of array";
}
