

#include "Brain.hpp"

std::string	Brain::identify(void) const
{
	std::stringstream	ret;

	ret << this;
	return (ret.str());
}

Brain::Brain(void)
{
	_qi = rand();
	_size = _qi * rand();
}

Brain::~Brain()
{
}
