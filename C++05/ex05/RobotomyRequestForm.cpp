

#include "RobotomyRequestForm.hpp"

/* ************************************************************************** */
std::string	const RobotomyRequestForm::name = "Robotomy_Request";

RobotomyRequestForm::RobotomyRequestForm(std::string _name) :
	Form(RobotomyRequestForm::name, 72, 45), target(_name)
{
	srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) :
	Form(src), target(src.target)
{
	srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm()	{}

/* ************************************************************************** */

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	(void)src;
	return *this;
}

/* ************************************************************************** */

void	RobotomyRequestForm::execute(const Bureaucrat& _b) const
{

	(void)_b;
	if ((rand() % 2) == 0)
	{
		for (int i = 0; i < 50000; i++)
			std::cout << "\a";
		std::cout << this->target << " has been robotomized !" << std::endl;
	}
	else
	{
		std::cout << "failure" << std::endl;
	}
}
