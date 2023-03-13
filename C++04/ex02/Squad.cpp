

#include "Squad.hpp"

/* ************************************************************************** */
	//	Constructors & Destructor
Squad::Squad (void) :
	count(0), units(0)	{}

Squad::Squad (std::string _name) :
	count(0), units(0), name(_name)	{}

Squad::Squad (const Squad& src)
{
	int	i;

	name = src.name;
	for (i = 0; i < src.getCount(); i++)
		this->push(src.getUnit(i)->clone());
	this->count = i + 1;
}

Squad ::~Squad (void)
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
	}
}

/* ************************************************************************** */
	//	Operator Overload
Squad&	Squad::operator=(const Squad& src)
{
	int i;
	if (this->units)
	{
		for (int j = 0; j < this->count; j++)
			delete this->units[j];
		delete this->units;
		this->units = 0;
	}
	this->count = 0;

	for (i = 0; i < src.getCount(); i++)
		this->push(src.getUnit(i)->clone());
	this->count = i + 1;
	return *this;
}
/* ************************************************************************** */
	//	Getter
int		Squad::getCount(void) const
{
	return (count);
}

ISpaceMarine*	Squad::getUnit(int _n) const
{
	if (this->count == 0 || _n < 0 || _n >= count)
		return (0);
	return (this->units[_n]);
}

int		Squad::push(ISpaceMarine*	_marine)
{
	if (!_marine)
		return (this->count);
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			if (this->units[i] == _marine)
				return (this->count);
		ISpaceMarine **cpy = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			cpy[i] = this->units[i];
		delete [] this->units;
		this->units = cpy;
		this->units[this->count] = _marine;
		this->count++;
	}
	else
	{
		this->units = new	ISpaceMarine*[1];
		this->units[0] = _marine;
		this->count = 1;
	}
	return this->count;
}
