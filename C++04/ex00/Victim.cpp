

#include "Victim.hpp"

	//	Constructors & Destructor
Victim::Victim(void)
{
	Victim("Mr.X");
}

Victim::Victim(std::string	_name) : name(_name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& src)
{
	name = src.get_name();
	std::cout << "The Victim just copied itself !" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}
/*================================================================*/
	//	Operator Overload
Victim&		Victim::operator=(const Victim& src)
{
	this->name = src.get_name();
	return *this;
}

std::ostream&	operator<<(std::ostream& stream, const Victim& src)
{
	std::cout << "I'm " << src.get_name() << ", and i like otters!" << std::endl;
	return stream;
}
/*================================================================*/
	//	Getter
std::string		Victim::get_name(void)	const
{
	return name;
}
/*================================================================*/
	//	Member Funcion
void	Victim::bepolymorphed(void) const
{
	std::cout << this->get_name() << " has been turned into a cute litte sheep!" << std::endl;
}
