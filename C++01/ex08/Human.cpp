

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "..Attacking the " << target << " with a sword" << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "..Firing arrow to " << target << " using a giant bow" << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Shouting loud to " << target << ", is worried by you !" << std::endl;
}

typedef void (Human::*f_ptr) (std::string const &);

void	Human::action(std::string const & action_name, std::string const & target)
{
	std::string		actions[3] = {"melee", "ranged", "shout"};
	f_ptr			f_ptr[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	int				i;

	for (i = 0 ; i < 3; i++)
	{
		if (action_name == actions[i])
			(this->*f_ptr[i])(target);
	}
}
