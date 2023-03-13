/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 12:13:04 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/07 17:08:39 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <string>
#include <iomanip>
#include <iostream>

class pbook
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_login;
	std::string	_postal_address;
	std::string	_email_address;
	std::string	_phone_number;
	std::string	_birthday_date;
	std::string	_favorite_meal;
	std::string	_underwear_color;
	std::string	_darkest_secret;
public:
	pbook(void);
	~pbook(void);
	void	set_fname(std::string str);
	void	set_lname(std::string str);
	void	set_nname(std::string str);
	void	set_login(std::string str);
	void	set_postaddr(std::string str);
	void	set_mail(std::string str);
	void	set_phone(std::string str);
	void	set_bday(std::string str);
	void	set_meal(std::string str);
	void	set_undcolor(std::string str);
	void	set_secret(std::string str);

	std::string	get_fname(void);
	std::string	get_lname(void);
	std::string	get_nname(void);
	std::string	get_login(void);
	std::string	get_postaddr(void);
	std::string	get_mail(void);
	std::string	get_phon(void);
	std::string	get_bday(void);
	std::string	get_meal(void);
	std::string	get_undcolor(void);
	std::string	get_secret(void);
};

#endif
