

#include "DeepCoreMiner.hpp"

/* ************************************************************************** */
	// Constructor & Destructor
DeepCoreMiner::DeepCoreMiner(void)
{}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner& src)
{
	(void)src;
}

DeepCoreMiner::~DeepCoreMiner(void)
{}

/* ************************************************************************** */
	// Operation Overload
DeepCoreMiner&	DeepCoreMiner::operator=(const DeepCoreMiner& src)
{
	(void)src;
	return *this;
}

/* ************************************************************************** */
	//	Member Function
void	DeepCoreMiner::mine(IAsteroid *_ast)
{
	if (_ast == 0)
		return ;
	std::cout << "* mining deep... got " << _ast->beMined(this) << "! *" << std::endl;
}
