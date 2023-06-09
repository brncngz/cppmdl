

#include "Form.hpp"

/* ************************************************************************** */
	//	Constructor & Destructor
Form::Form(void)
{}

Form::Form(std::string name, int sig_grade, int exec_grade) :
	_name(name), _signed(false), _sig_grade(sig_grade), _exec_grade(exec_grade)
{
	if (sig_grade < 1 || exec_grade < 1 || sig_grade < exec_grade)
		throw Form::GradeTooHighException();
	else if (sig_grade > 150 || sig_grade > 150 || sig_grade < exec_grade)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& src) :
	_signed(src._signed), _sig_grade(src._sig_grade), _exec_grade(src._exec_grade)	{}

Form::~Form(void)
{}

/* ************************************************************************** */
	//	Op. Overload
Form&	Form::operator=(const Form& src)
{
	this->_signed = src.getSignStatus();
	this->_sig_grade = src.getMinSignGrade();
	this->_exec_grade = src.getMinExecGrade();
	return *this;
}

std::ostream&	operator<<(std::ostream& stream, const Form& f)
{
	std::string status;

	if (f.getSignStatus() == false)
		status = "not signed";
	else
		status = "signed";
	stream << "Form named : " << f.getName() << " is in status " << status << ", the minimum grade to sign it is " << f.getMinSignGrade() \
			<< " and to execute it is " << f.getMinExecGrade() << std::endl;
	return stream;
}
/* ************************************************************************** */
	//	Getter
std::string		Form::getName(void) const
{
	return _name;
}

bool			Form::getSignStatus(void) const
{
	return _signed;
}

int				Form::getMinSignGrade(void) const
{
	return _sig_grade;
}

int				Form::getMinExecGrade(void) const
{
	return _exec_grade;
}
/* ************************************************************************** */
	//	Mem. Function
void			Form::beSigned(const Bureaucrat& _b)
{
	(void)_b;
	this->_signed = true;
}

void			Form::execute(const Bureaucrat& _b) const
{
	(void)_b;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException : Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException : Grade too Low";
}

const char* Form::SignedFormException::what() const throw()
{
	return "FormException : Form is already signed";
}


const char* Form::ExecTooLowException::what() const throw()
{
	return "FormException : cannot execute the form, the grade is too low";
}

