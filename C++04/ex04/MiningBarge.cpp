

#include "MiningBarge.hpp"

/* ************************************************************************** */
	//	Constructor & Destructor
MiningBarge::MiningBarge(void) :
	equipped(0)
{
	for (int i = 0; i < 4; i++)
		this->lasers[i] = 0;
}

MiningBarge::MiningBarge(const MiningBarge& src)
{
	for (int i = 0; i < src.equipped; i++)
		this->lasers[i] = src.lasers[i];
	for (int i = src.equipped; i < 4; i++)
		this->lasers[i] = 0;
	this->equipped = src.equipped;
}

MiningBarge::~MiningBarge(void)
{
}
/* ************************************************************************** */
	//	Op. Overload
MiningBarge&	MiningBarge::operator=(const MiningBarge& src)
{
	if (this->equipped)
	{
		for (int i = 0; i < this->equipped; i++)
			delete this->lasers[i];
	}
	this->equipped = 0;
	for (int i = 0; i < src.equipped; i++)
		this->lasers[i] = src.lasers[i];
	for (int i = src.equipped; i < 4; i++)
		this->lasers[i] = 0;
	this->equipped = src.equipped;
	return *this;
}
/* ************************************************************************** */
	//	Member Function
void	MiningBarge::equip(IMiningLaser *_lsr)
{
	if (_lsr == 0 || this->equipped == 4)
		return ;
	this->lasers[this->equipped++] = _lsr;
}

void	MiningBarge::mine(IAsteroid* _ast) const
{
	for (int i = 0; i < this->equipped; i++)
		this->lasers[i]->mine(_ast);
}
