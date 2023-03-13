

#ifndef OPERATOR_HPP
# define OPERATOR_HPP

# include "../Token.hpp"

class Operator : public Token
{
	public:
		Operator(char _c);
		Operator(const Operator& src);
		~Operator(void);

		Operator&	operator=(const Operator& src);

		int			getType(void) const;
		void			print(void) const;
		std::string		print_operation(void) const;
	private:
		Operator(void);

		char		value;
};

#endif
