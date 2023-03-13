

#include "StripMiner.hpp"

/* ************************************************************************** */
	// Constructor & Destructor
StripMiner::StripMiner(void)
{}

StripMiner::StripMiner(const StripMiner& src)
{
	(void)src;
}

StripMiner::~StripMiner(void)
{}

/* ************************************************************************** */
	// Operation Overload
StripMiner&	StripMiner::operator=(const StripMiner& src)
{
	(void)src;
	return *this;
}

/* ************************************************************************** */
	//	Member Function
void	StripMiner::mine(IAsteroid *_ast)
{
	if (_ast == 0)
		return ;
	std::cout << "* strip mining... got " << _ast->beMined(this) << "! *" << std::endl;
}
