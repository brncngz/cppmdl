

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

# include "OfficeBlock.hpp"

class CentralBureaucracy
{
	public:
		CentralBureaucracy(void);
		~CentralBureaucracy(void);

		class CentralBureaucracyException : public std::exception
		{
			virtual const char* what() const throw();
		};

		void	feed(Bureaucrat& _brct);
		void	queueUp(const std::string& _target);
		void	doBureacracy(void);
	private:
		CentralBureaucracy(const CentralBureaucracy& src);

		CentralBureaucracy& operator=(const CentralBureaucracy& src);
		OfficeBlock	ob[20];
		Intern		intern[20];
		std::string	*queue;
		int			employers;
		int			_Q;

};

CentralBureaucracy&	operator<<(CentralBureaucracy& _cb, Bureaucrat& _empl);

#endif
