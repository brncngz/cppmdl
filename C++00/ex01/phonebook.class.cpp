/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 12:33:22 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/07 17:12:50 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

void	pbook::set_fname(std::string str)
{	_first_name = str;	}
void	pbook::set_lname(std::string str)
{	_last_name = str;	}
void	pbook::set_nname(std::string str)
{	_nickname = str;	}
void	pbook::set_login(std::string str)
{	_login = str;	}
void	pbook::set_postaddr(std::string str)
{	_postal_address = str;	}
void	pbook::set_mail(std::string str)
{	_email_address = str;	}
void	pbook::set_phone(std::string str)
{	_phone_number = str;	}
void	pbook::set_bday(std::string str)
{	_birthday_date = str;	}
void	pbook::set_meal(std::string str)
{	_favorite_meal = str;	}
void	pbook::set_undcolor(std::string str)
{	_underwear_color = str;	}
void	pbook::set_secret(std::string str)
{	_darkest_secret	= str;	}

std::string	pbook::get_fname(void)
{	return (_first_name);	}
std::string	pbook::get_lname(void)
{	return (_last_name);	}
std::string	pbook::get_nname(void)
{	return (_nickname);	}
std::string	pbook::get_login(void)
{	return (_login);	}
std::string	pbook::get_postaddr(void)
{	return (_postal_address);	}
std::string	pbook::get_mail(void)
{	return (_email_address);	}
std::string	pbook::get_phon(void)
{	return (_phone_number);	}
std::string	pbook::get_bday(void)
{	return (_birthday_date);	}
std::string	pbook::get_meal(void)
{	return (_favorite_meal);	}
std::string	pbook::get_undcolor(void)
{	return (_underwear_color);	}
std::string	pbook::get_secret(void)
{	return (_darkest_secret);	}

pbook::pbook(void): _first_name(""), _last_name(""), _nickname(""),
	_login(""),	_postal_address(""), _email_address(""), _phone_number(""),
	_birthday_date(""),	_favorite_meal(""),	_underwear_color(""), _darkest_secret("")
{}

pbook::~pbook(void)
{}
