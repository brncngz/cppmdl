

#include "Intern.hpp"

/* ************************************************************************** */

Intern::Intern(void)
{
	funcptr[0] = Intern::createShrubbery;
	funcptr[1] = Intern::createRobotomy;
	funcptr[2] = Intern::createPardon;
}

Intern::Intern(const Intern& src)
{
	(void)src;
}

Intern::~Intern(void)
{}
/* ************************************************************************** */

Intern&		Intern::operator=(const Intern& src)
{
	(void)src;
	return *this;
}
/* ************************************************************************** */

Form*	Intern::makeForm(std::string _form, std::string _target)
{
	std::string	formKnown[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	for (int i = 0; i < 3; i++)
		if (formKnown[i] == _form)
		{
			std::cout << "Intern creates <" << formKnown[i] << "> " << std::endl;
			return funcptr[i](_target);
		}
	throw Intern::FormNotKnown();
	return 0;
}
/* ************************************************************************** */

Form*	Intern::createShrubbery(std::string _target)
{
	return (new ShrubberyCreationForm(_target));
}

Form*	Intern::createRobotomy(std::string _target)
{
	return (new RobotomyRequestForm(_target));
}

Form*	Intern::createPardon(std::string _target)
{
	return (new PresidentialPardonForm(_target));
}



const char* Intern::FormNotKnown::what() const throw()
{
	return "Exception: Form Unknown";
}
