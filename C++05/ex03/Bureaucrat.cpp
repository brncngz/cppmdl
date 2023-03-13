

#include "Bureaucrat.hpp"

/* ************************************************************************** */
	// Constructor & Destructor
Bureaucrat::Bureaucrat(std::string _name, int _grade) :
	name(_name), grade(_grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) :
	name(src.name), grade(src.grade)	{}

Bureaucrat::~Bureaucrat(void)
{}
/* ************************************************************************** */
	// Op. Overload
Bureaucrat&		Bureaucrat::operator=(const Bureaucrat& src)
{
	this->grade = src.getGrade();
	return *this;
}

std::ostream&	operator<<(std::ostream& _stream, const Bureaucrat& _bureau)
{
	_stream << _bureau.getName() << ", bureaucrat grade " << _bureau.getGrade() << std::endl;
	return _stream;
}
/* ************************************************************************** */
	// Getter
int			Bureaucrat::getGrade(void) const
{
	return this->grade;
}

std::string	Bureaucrat::getName(void) const
{
	return this->name;
}
/* ************************************************************************** */
	// Member func.
void		Bureaucrat::incrementGrade(void)
{
	if (this->grade > 1)
		this->grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void		Bureaucrat::decrementGrade(void)
{
	if (this->grade < 150)
		this->grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

bool		Bureaucrat::signForm(Form& _f) const
{
	if (_f.getSignStatus() == true)
	{
		throw Bureaucrat::AlreadySignException();
		return false;
	}
	else if (this->grade <= _f.getMinSignGrade())
	{
		std::cout << this->getName() << " signs " << _f.getName() << std::endl;
		_f.beSigned(*this);
		return true;
	}
	throw Bureaucrat::GradeTooLowException();
	return false;
}

bool		Bureaucrat::executeForm(const Form& _f) const
{
	if (_f.getSignStatus() == false)
	{
		throw Bureaucrat::NotSignedException();
		return false;
	}
	else if (this->grade <= _f.getMinExecGrade())
	{
		std::cout << this->getName() << " execute " << _f.getName() << std::endl;
		_f.execute(*this);
		return true;
	}
	throw Bureaucrat::ExecuteTooLowException();
	return false;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException : Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException : Grade too Low";
}

const char* Bureaucrat::AlreadySignException::what() const throw()
{
	return "BureaucratException : Form already signed";
}

const char* Bureaucrat::NotSignedException::what() const throw()
{
	return "BureaucratException : can't execute a not signed Form";
}

const char* Bureaucrat::ExecuteTooLowException::what() const throw()
{
	return "BureaucratException : Grade too Low to execute form";
}
