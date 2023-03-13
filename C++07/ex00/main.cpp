

#include "whatever.hpp"
#include <string>

int		main(void)
{
	int a = 5;
	int b = 10;

	std::string str1 = "string1";
	std::string str2 = "string2";

	std::cout << "inizial value" << std::endl;
	std::cout << a << "/" << b << std::endl << str1 << " -- " << str2 << std::endl;

	for (int i = 0; i < 2; i++)
	{
		::swap(a, b);
		std::cout << std::endl << "After Swap a & b" << std::endl;
		std::cout << a << "/" << b << std::endl << str1 << " -- " << str2 << std::endl;
		::swap(str1, str2);
		std::cout << "After Swap strings" << std::endl;
		std::cout << a << "/" << b << std::endl << str1 << " -- " << str2 << std::endl;

		std::cout << "Getting min" << std::endl;
		std::cout <<	::min(a, b) << " -- " << \
						::min(str1, str2) << std::endl;

		std::cout << "Getting max" << std::endl;
		std::cout <<	::max(a, b) << " -- " << \
						::max(str1, str2) << std::endl << std::endl;
	}
	std::cout << "Bye !" << std::endl;
}
