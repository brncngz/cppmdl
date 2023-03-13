

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	public:
			Enemy(void);
			Enemy(int _hp, std::string const & _type);
			Enemy(const Enemy& src);
			virtual	~Enemy();

			Enemy&	operator=(const Enemy& src);

			std::string const getType(void) const;
			int			getHP(void) const;

			virtual void takeDamage(int _n);
	protected:
				std::string type;
				int		hp;
	private:
};

#endif
