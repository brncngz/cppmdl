

#include "phonebook.class.hpp"

std::string	ft_truncation(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	show_contact(pbook *book, int i)
{
		std::cout << "First name -> :" << book[i].get_fname() << std::endl ;
		std::cout << "Last name -> :" << book[i].get_lname() << std::endl ;
		std::cout << "Nickname -> :" << book[i].get_nname() << std::endl ;
		std::cout << "Login -> :" << book[i].get_login() << std::endl ;
		std::cout << "Postal address -> :" << book[i].get_postaddr() << std::endl ;
		std::cout << "Email address-> :" << book[i].get_mail() << std::endl ;
		std::cout << "Phone Number -> :" << book[i].get_phon() << std::endl ;
		std::cout << "Birthday date -> :" << book[i].get_bday() << std::endl ;
		std::cout << "Favorite Meal -> :" << book[i].get_meal() << std::endl ;
		std::cout << "Underwear color -> :" << book[i].get_undcolor() << std::endl ;
		std::cout << "Darkest Secret -> :" << book[i].get_secret() << std::endl << std::endl ;
}

void	search(pbook *book, int i)
{
	int				j;
	int				ip = -1;
	std::string	input;

	if (i == 0)
	{
		std::cout << "There isn't any contact to show\n";
		return ;
	}
	for (j = 0; j < i ; j++)
	{
		std::cout << "****************************************" << std::endl;
		std::cout << "|" << std::setw(10) << j + 1 ;
		std::cout << "|" << std::setw(10) << ft_truncation(book[j].get_fname()) ;
		std::cout << "|" << std::setw(10) << ft_truncation(book[j].get_lname()) ;
		std::cout << "|" << std::setw(10) << ft_truncation(book[j].get_nname()) ;
		std::cout << "|" << std::endl ;
	}
	std::cout << "****************************************" << std::endl;
	std::cout << "Select a contact by it's index to show complete information" << std::endl;
	while (!(ip >= 1 && ip <= 9))
	{
		getline(std::cin, input) ;
		ip = std::stoi(input);
	}
	show_contact(book, ip - 1);
	std::cout << std::endl ;
}

void	add_user(pbook **book, int i)
{
	std::string		input;

	std::cout << "To create new contact fill this information\n";
	std::cout << "First Name :\n";
	getline(std::cin, input);
	(*book)[i].set_fname(input);
	std::cout << "Last Name :\n";
	getline(std::cin, input);
	(*book)[i].set_lname(input);
	std::cout << "Nickname :\n";
	getline(std::cin, input);
	(*book)[i].set_nname(input);
	std::cout << "Login :\n";
	getline(std::cin, input);
	(*book)[i].set_login(input);
	std::cout << "Postal address :\n";
	getline(std::cin, input);
	(*book)[i].set_postaddr(input);
	std::cout << "Email address :\n";
	getline(std::cin, input);
	(*book)[i].set_mail(input);
	std::cout << "Phone Number :\n";
	getline(std::cin, input);
	(*book)[i].set_phone(input);
	std::cout << "Birthday date :\n";
	getline(std::cin, input);
	(*book)[i].set_bday(input);
	std::cout << "Favorite Meal :\n";
	getline(std::cin, input);
	(*book)[i].set_meal(input);
	std::cout << "Underwear Color :\n";
	getline(std::cin, input);
	(*book)[i].set_undcolor(input);
	std::cout << "Darkest Secret :\n";
	getline(std::cin, input);
	(*book)[i].set_secret(input);
	std::cout << "Great! new contact added, you will prompt back to main menu" << std::endl;
}

int	main(void)
{
	pbook			*book;
	std::string		input;
	int					i = 0;

	book = new(pbook[8]);
	while (1)
	{
		std::cout << "$>" ;
		std::getline(std::cin, input);
		if (input == "SEARCH")
			search(book, i);
		else if (input == "EXIT")
			break ;
		else if (input == "ADD")
		{
			if (i < 8)
				add_user(&book, i++);
			else
				std::cout << "PhoneBook is full, can't add a new contact\n";
		}
		else
			std::cout << "$> Command not recognized" << std::endl;
	}
	delete [] book;
	return (0);
}
