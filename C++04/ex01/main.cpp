

#include "Character.hpp"

int		main(void)
{
	Character	*me =	new	Character("me");

	std::cout << *me;

	Enemy *b = new RadScorpion();
	Enemy *a = new SuperMutant();

	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();

	me->attack(a);
	me->equip(pf);
	me->attack(a);
	me->attack(a);

 	delete a;
	delete b;
	delete pr;
	delete pf;
	delete me;

	return (0);
}
