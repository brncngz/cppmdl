

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon			club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("sword");
		bob.attack();
	}
	{
		Weapon			club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("axe");
		jim.attack();
	}
}
