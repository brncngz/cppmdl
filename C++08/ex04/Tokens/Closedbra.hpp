

#ifndef CLOSEDBRA_HPP
# define CLOSEDBRA_HPP

# include "../Token.hpp"

class Closedbra : public Token
{
	public:
		Closedbra(void);
		Closedbra(const Closedbra& src);
		~Closedbra(void);

		Closedbra&	operator=(const Closedbra& src);

		int		getType(void) const;
		void	print(void) const;
	private:
};

#endif
