


#ifndef	BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# include <string>

class Brain
{
private:
	int	_qi;
	int	_size;

public:
	std::string		identify(void) const;
	Brain(void);
	~Brain(void);
};

#endif
