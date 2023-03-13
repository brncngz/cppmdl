

#include "MateriaSource.hpp"

/* ************************************************************************** */
	//	Costructors & Destructor
MateriaSource::MateriaSource(void) :
	amount(0)
{
	for (int i = 0; i < 4; i++)
		this->sources[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& src) :
	amount(0)
{
	for (int i = 0; i < src.amount; i++)
		this->learnMateria(src.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = 0;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->amount; i++)
		delete this->sources[i];
}
/* ************************************************************************** */
	//	Operator Overload
MateriaSource&	MateriaSource::operator=(const MateriaSource& src)
{
	this->~MateriaSource();
	this->amount = 0;
	for (int i = 0; i < src.amount; i++)
		this->learnMateria(src.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = 0;
	return *this;
}
/* ************************************************************************** */
	//	Member Function
void	MateriaSource::learnMateria(AMateria* _m)
{
	if (this->amount == 4 || _m == 0)
		return ;
	this->sources[this->amount++] = _m;
}

AMateria*	MateriaSource::createMateria(std::string const & _type)
{
	for (int i = 0; i < this->amount; i++)
		if (this->sources[i]->getType() == _type)
			return this->sources[i]->clone();
	return 0;
}
