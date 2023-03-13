

#include "AsteroKreog.hpp"

/* ************************************************************************** */
	//	Constructor & Destructor
AsteroKreog::AsteroKreog(void) :
	name("Asteroid")	{}

AsteroKreog::AsteroKreog(std::string _name) :
	name(_name)	{}

AsteroKreog::AsteroKreog(const AsteroKreog& src) :
	name(src.name)	{}

AsteroKreog::~AsteroKreog(void)
{}
/* ************************************************************************** */
	//	Op.	Overload
AsteroKreog&	AsteroKreog::operator=(const AsteroKreog& src)
{
	this->name = src.name;
	return *this;
}
/* ************************************************************************** */
	//	Getter & Member func.
std::string		AsteroKreog::getName(void) const
{
	return this->name;
}


std::string		AsteroKreog::beMined(DeepCoreMiner* _lsr) const
{
	(void)_lsr;
	return ("Meium");
}

std::string		AsteroKreog::beMined(StripMiner* _lsr) const
{
	(void)_lsr;
	return ("Tartarite");
}
