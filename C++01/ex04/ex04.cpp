

#include <iostream>
#include <string>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string &ref = str;

	std::cout << "display the string ->" << str << std::endl;
	std::cout << "string using the pointer -> " << *ptr << std::endl;
	std::cout << "string using the reference -> " << ref << std::endl;
	return (0);
}
