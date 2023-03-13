

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Peon.hpp"

class Sorcerer
{
	public:
			Sorcerer(void);
			Sorcerer(std::string _name, std::string _title);
			Sorcerer(const Sorcerer& src);
			~Sorcerer(void);

			Sorcerer&	operator=(const Sorcerer& src);

			std::string		get_name(void) const;
			std::string		get_title(void) const;
			void	polymorph(Victim const & src) const;
	private:
			std::string	name;
			std::string	title;
};

std::ostream&	operator<<(std::ostream& stream, const Sorcerer& src);

#endif
