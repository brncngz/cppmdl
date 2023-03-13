
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"
class Form;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string _name);
		ShrubberyCreationForm(const ShrubberyCreationForm& src);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& src);

		class FileCreationException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class FileWritingException : public std::exception
		{
			virtual const char* what() const throw();
		};

		void	execute(const Bureaucrat& _b) const;
	private:
		ShrubberyCreationForm(void);

		std::string target;
		static std::string const name;
		static std::string const three;
};

#endif
