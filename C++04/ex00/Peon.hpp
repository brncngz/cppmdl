

#ifndef	PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	public:
			Peon(void);
			Peon(std::string _name);
			Peon(const Peon& src);
			~Peon(void);

			Peon&	operator=(const Peon& src);

			void	bepolymorphed(void) const;
	private:
};

#endif
