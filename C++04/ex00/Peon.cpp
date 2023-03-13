

#include "Peon.hpp"

	//	Constructor & Destructor
Peon::Peon(void) : Victim()
{
	std::cout << "Zog zog" << std::endl;
}

Peon::Peon(std::string _name) : Victim(_name)
{
	std::cout << "Zog zog" << std::endl;
}

Peon::Peon(const Peon& src) : Victim(src)
{
	std::cout << "Zog zog" << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}
/*================================================================*/
	// Operator Overload
Peon&	Peon::operator=(const Peon& src)
{
	Victim::operator=(src);
	return *this;
}
/*================================================================*/
	//	Member Funcion
void	Peon::bepolymorphed(void) const
{
	std::cout << this->get_name() << " has been turned into a pink pony!" << std::endl;
}
