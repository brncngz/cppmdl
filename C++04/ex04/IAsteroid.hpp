

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <iostream>
# include <string>
class IAsteroid;
class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
	public:
		virtual	~IAsteroid() {}
		virtual	std::string beMined(DeepCoreMiner *) const = 0;
		virtual	std::string beMined(StripMiner *) const = 0;
		virtual	std::string	getName(void) const = 0;
};

#endif
