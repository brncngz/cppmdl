

#ifndef POLAND_HPP
# define POLAND_HPP

# include <string>
# include <iostream>
# include <sstream>
# include <exception>
# include <deque>
# include <stack>
# include "Token.hpp"
# include "Tokens/Number.hpp"
# include "Tokens/Openbra.hpp"
# include "Tokens/Closedbra.hpp"
# include "Tokens/Operator.hpp"

void	print_stack(std::deque<int>& stack);
int		operate(int _lft, int _rght, std::string _op);
class Polander
{
	public:
		Polander(char* _data);
		~Polander();

		class InvalidExpression : public std::exception
		{
			virtual const char* what() const throw();
		};

		class InvalidNumber : public std::exception
		{
			virtual const char* what() const throw();
		};
	private:
		Polander(void);
		Polander(const Polander& src);

		Polander&	operator=(const Polander& src);

		bool	is_valid();
		void	tokenize();
		void	show_token();
		void	Polanderize();
		void	show_poland();
		void	do_math();
		std::string		input;
		std::deque<Token*> tk_list;
		std::deque<Token*> pol_list;
};

#endif
