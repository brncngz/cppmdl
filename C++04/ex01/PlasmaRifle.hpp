

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
			PlasmaRifle(void);
			PlasmaRifle(const PlasmaRifle& src);
			~PlasmaRifle();

			PlasmaRifle&	operator=(const PlasmaRifle& src);

			void	attack() const;
	private:
};

#endif
