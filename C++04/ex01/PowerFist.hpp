

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
			PowerFist(void);
			PowerFist(const PowerFist& src);
			~PowerFist();

			PowerFist&	operator=(const PowerFist& src);

			void	attack() const;
	private:
};

#endif
