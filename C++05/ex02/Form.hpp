

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
class Bureaucrat;


class Form
{
	public:
		Form(std::string name, int sig_grade, int exec_grade);
		Form(const Form& src);
		~Form(void);

		Form&	operator=(const Form& src);

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class SignedFormException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class ExecTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};

		std::string	getName(void) const;
		bool		getSignStatus(void) const;
		int			getMinSignGrade(void) const;
		int			getMinExecGrade(void) const;

		void	beSigned(const Bureaucrat& _b);
		virtual	void	execute(const Bureaucrat& _b) const = 0;
	private:
		Form(void);
		std::string	const	_name;
		bool				_signed;
		int					_sig_grade;
		int					_exec_grade;
};
		std::ostream&	operator<<(std::ostream& stream, const Form& f);

#endif
