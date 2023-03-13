

#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
//	#include "Fire.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
//	src->learnMateria(new Fire());

	ICharacter* me = new Character("me");

	AMateria* tmp = 0;
	AMateria* first = 0;
	tmp = src->createMateria("fire");
	//	materia fire sconosciuta, tmp->0;
	me->equip(tmp);
	tmp = src->createMateria("ice");
	first = tmp;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	me->equip(0);

	ICharacter* bob = new Character("bob");
	me->use(-1, *bob);
	// indice -1, nessuna azione 	//
	std::cout << "materia exp: " << first->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	me->unequip(0);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	me->use(3, *bob);
	me->unequip(-1);
	me->equip(first);

	delete bob;
	delete me;
	delete src;

	return (0);
}
