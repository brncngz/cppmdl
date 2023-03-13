

#include "Sorcerer.hpp"

	//	Constructors & Destructor
Sorcerer::Sorcerer(void)
{
	Sorcerer("Merlin", "The greatest");
}

Sorcerer::Sorcerer(std::string _name, std::string _title) : name(_name), title(_title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& src)
{
	this->name = src.get_name();
	this->title = src.get_title();
	std::cout << name << ", " << title << ", duplicates himself!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}
/*================================================================*/
	//	Operators Overload
Sorcerer&	Sorcerer::operator=(const Sorcerer& src)
{
	this->name = src.get_name();
	this->title = src.get_title();
	return *this;
}

std::ostream&	operator<<(std::ostream& stream, const Sorcerer& src)
{
	std::cout << "I am " << src.get_name() << ", " << src.get_title() << ", and i like ponies!" << std::endl;
	return stream;
}
/*================================================================*/
	// Getter
std::string		Sorcerer::get_name(void) const
{
	return name;
}

std::string		Sorcerer::get_title(void) const
{
	return title;
}
/*================================================================*/
	//	Member Funcion
void	Sorcerer::polymorph(Victim const & src) const
{
	src.bepolymorphed();
}
/*================================================================*/


