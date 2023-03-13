

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
	srand(time(0));
	std::vector<int>::iterator _it;
	std::vector<int> v(10);
	for (int i = 0; i < 10; i++)
		v[i] = i;
	try
	{
		_it = ::easyfind(v, 12);
		std::cout << *_it << " in position " << _it - v.begin() <<  std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "*NOT FOUND*" << std::endl;
	}
}
