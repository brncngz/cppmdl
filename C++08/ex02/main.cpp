

#include <iostream>
#include <iomanip>
#include "mutantstack.hpp"
#include <list>

int main(void)
{
	MutantStack<int> mstack;
	std::list<int>	lst;

	std::cout << "-------------------------------------" << std::endl;
	std::cout << "\x1b[36m   Mutant Stack   |     std::list    \x1b[0m" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	mstack.push(5);
	lst.push_back(5);
	mstack.push(17);
	lst.push_back(17);
	std::cout << "\x1b[36m Last added :\x1b[0m     |" << std::endl;
	std::cout << std::setw(17) << mstack.top() << " |" << std::setw(17) << lst.back() << std::endl;
	mstack.pop();
	lst.pop_back();
	std::cout << "\x1b[36m Size :\x1b[0m           |" << std::endl;
	std::cout << std::setw(17) << mstack.size() << " |" << std::setw(17) << lst.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);

	std::cout << "\x1b[36m Last added :\x1b[0m     |" << std::endl;
	std::cout << std::setw(17) << mstack.top() << " |" << std::setw(17) << lst.back() << std::endl;

	MutantStack<int>::iterator	mit = mstack.begin();
	MutantStack<int>::iterator	mitend = mstack.end();
	std::list<int>::iterator	lsit =	lst.begin();
	std::list<int>::iterator	lsitend = lst.end();

	++mit;
	--mit;
	++lsit;
	--lsit;
	std::cout << "\x1b[36m Contents :\x1b[0m       |" << std::endl;
	while (mit != mitend || lsit != lsitend)
	{
		std::cout << std::setw(17) << *mit << " |" << std::setw(17) << *lsit << std::endl;
		++mit;
		++lsit;
	}
	std::stack<int> s(mstack);
	std::list<int>	l(lst);

	std::cout << "\x1b[36m Last added :\x1b[0m     |" << std::endl;
	std::cout << std::setw(17) << s.top() << " |" << std::setw(17) << l.back() << std::endl;

	MutantStack<int>	s_stack = mstack;
	std::list<int>		s_lst = lst;

	s_stack.push(2);
	s_stack.push(8);
	s_stack.push(12);
	s_lst.push_back(2);
	s_lst.push_back(8);
	s_lst.push_back(12);

	mit = s_stack.begin();
	mitend = s_stack.end();
	lsit = s_lst.begin();
	lsitend = s_lst.end();

	std::cout << "\x1b[36m Contents :\x1b[0m       |" << std::endl;
	while (mit != mitend || lsit != lsitend)
	{
		std::cout << std::setw(17) << *mit << " |" << std::setw(17) << *lsit << std::endl;
		mit++;
		lsit++;
	}

	return (0);
}
