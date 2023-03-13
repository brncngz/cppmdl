

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
class Form;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string _name);
		RobotomyRequestForm(const RobotomyRequestForm& src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& src);

		void	execute(const Bureaucrat& _b) const;
	private:
		RobotomyRequestForm(void);

		std::string target;
		static std::string const name;
		static std::string const three;
};

#endif
