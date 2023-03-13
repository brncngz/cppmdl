


#include <iostream>
#include <string>
#include <ctime>

class	Zombie
{
	public:
			Zombie(void);
			~Zombie(void);
			void	announce(void);
			void	set_type(std::string type);
			void	set_name(std::string name);
	private:
			std::string	_type;
			std::string	_name;
};
