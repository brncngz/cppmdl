

#include "Token.hpp"

Token::Token(void)	{}

Token::Token(const Token& src)
{
	(void) src;
}

Token::~Token()	{}

Token&	Token::operator=(const Token& src)
{
	(void)src;
	return *this;
}
