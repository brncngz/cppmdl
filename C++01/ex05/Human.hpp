

#ifndef	HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	const Brain	_brain;
	std::string	_name;
public:
	const Brain&	getBrain();
	std::string		identify();
	Human(void);
	~Human(void);
};

#endif
