

#ifndef OPENBRA_HPP
# define OPENBRA_HPP

# include "../Token.hpp"

class Openbra : public Token
{
	public:
		Openbra(void);
		Openbra(const Openbra& src);
		~Openbra(void);

		Openbra&	operator=(const Openbra& src);

		int		getValue(void) const;
		int		getType(void) const;
		void	print(void) const;
	private:
};

#endif
