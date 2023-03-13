

#ifndef TOKEN_HPP
# define TOKEN_HPP

# include <iostream>

class Token
{
	public:
		Token(void);
		Token(const Token& src);
		virtual ~Token();

		Token&	operator=(const Token& src);

		virtual	int	getType(void) const = 0;
		virtual void print(void) const = 0;
	private:
};

#endif
