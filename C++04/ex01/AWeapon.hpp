

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	public:
			AWeapon(void);
			AWeapon(std::string const & name, int apcost, int damage);
			AWeapon(const AWeapon& src);
			virtual	~AWeapon(void);

			AWeapon&	operator=(const AWeapon& src);

			std::string const	getName() const;
			int					getAPCost() const;
			int					getDamage() const;
			virtual	void	attack() const = 0;
	protected:
			std::string		name;
			int				apcost;
			int				damage;
	private:
};

#endif
