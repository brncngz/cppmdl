

#include "ShrubberyCreationForm.hpp"

/* ************************************************************************** */
std::string	const ShrubberyCreationForm::name = "Shrubbery_Creation";

std::string const ShrubberyCreationForm::three =
"                     .o00o\n \
                   o000000oo\n \
                  00000000000o\n \
                 00000000000000\n \
              oooooo  00000000  o88o\n \
           ooOOOOOOOoo  ```''  888888\n \
         OOOOOOOOOOOO'.qQQQQq. `8888'\n \
        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n \
        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n \
         OOOOOOOOO QQQQQQQQQQ/ /QQ\n \
           OOOOOOOOO `QQQQQQ/ /QQ'\n \
             OO:F_P:O `QQQ/  /Q'\n \
                .  |  // |\n \
                d \\|_////\n \
                qP| \\ _' `|Ob\n \
                   |  / \\  Op\n \
                   |  | O| |\n \
           _       /. _/ /\\n \
            `---__/|_\\   //|  __\n \
                  `-'  `-'`-'-'\n";
/* ************************************************************************** */

ShrubberyCreationForm::ShrubberyCreationForm(std::string _name) :
	Form(ShrubberyCreationForm::name, 145, 137), target(_name)	{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) :
	Form(src), target(src.target)	{}

ShrubberyCreationForm::~ShrubberyCreationForm()	{}

/* ************************************************************************** */

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	(void)src;
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& _b) const
{
	(void)_b;
	std::string const fdName = (this->target + "_shrubbery");
	std::ofstream fd(fdName, std::ios::out | std::ios::app);

	if (!fd.is_open() || fd.bad())
		throw ShrubberyCreationForm::FileCreationException();
	fd << ShrubberyCreationForm::three;
	if (fd.bad())
	{
		fd << std::endl;
		fd.close();
		throw ShrubberyCreationForm::FileWritingException();
	}
	fd << std::endl;
	fd.close();
}

const char* ShrubberyCreationForm::FileCreationException::what() const throw()
{
	return "Error creating the file requested";
}

const char* ShrubberyCreationForm::FileWritingException::what() const throw()
{
	return "Error While writing in the file";
}
