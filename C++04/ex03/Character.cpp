

#include "Character.hpp"

/* ************************************************************************** */
	//	Constructors & Destrcutor
Character::Character(void)
{}

Character::Character(const std::string& _name) :
	name(_name), equipped(0)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(const Character& src) :
	name(src.name), equipped(0)
{
	for (int i = 0; i < src.equipped; i++)
		this->equip(src.inventory[i]->clone());
	for (int i = this->equipped; i < 4; i++)
		this->inventory[i] = 0;
}


Character::~Character(void)
{
	for (int i = 0; i < this->equipped; i++)
		delete this->inventory[i];
}

/* ************************************************************************** */
	//	Operator Overload
Character&		Character::operator=(const Character& src)
{
	this->name = src.name;
	for (int i = 0; i < this->equipped; i++)
		delete this->inventory[i];
	this->equipped = 0;
	for (int i = 0; i < src.equipped; i++)
		this->equip(src.inventory[i]->clone());
	for (int i = this->equipped; i < 4; i++)
		this->inventory[i] = 0;
	return *this;
}
/* ************************************************************************** */
	//	Getter & Member Function
std::string	const &	Character::getName(void) const
{
	return this->name;
}

void	Character::equip(AMateria* _m)
{
	if (this->equipped == 4 || _m == 0)
		return ;
	for (int i = 0; i < this->equipped; i++)
		if (this->inventory[i] == _m)
			return ;
	this->inventory[this->equipped++] = _m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->equipped || this->inventory[idx] == 0)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->inventory[i] = this->inventory[i + 1];
		this->inventory[i + 1] = 0;
	}
	this->equipped--;
}

void	Character::use(int idx, ICharacter& _target)
{
	if (idx < 0 || idx >= this->equipped || this->inventory[idx] == 0)
		return ;
	this->inventory[idx]->use(_target);
}
