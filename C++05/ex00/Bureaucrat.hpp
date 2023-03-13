

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(const Bureaucrat& src);
		~Bureaucrat(void);

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};

		Bureaucrat&		operator=(const Bureaucrat& src);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
	private:
		Bureaucrat(void);

		std::string const	name;
		int					grade;
};
		std::ostream&	operator<<(std::ostream& _stream, const Bureaucrat& _bureau);

#endif
