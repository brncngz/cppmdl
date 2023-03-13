

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <string>
# include "ISquad.hpp"
class Squad : public ISquad
{
	public:
			Squad(void);
			Squad(std::string _name);
			Squad(const Squad& src);
			~Squad (void);

			Squad& operator=(const Squad& src);

			int				getCount(void)	const;
			ISpaceMarine*	getUnit(int _n) const;
			int				push(ISpaceMarine* _marine);
	private:
			int		count;
			ISpaceMarine	**units;
			std::string		name;
};

#endif
