

/*
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>

std::vector<char>	read_src(char *path)
{
	std::ifstream	fd(path);
	std::vector<char> src;

	char c;
	while(fd.get(c))
		src.push_back(c);
	return src;
}

void	open_mind(std::vector<char>& src)
{
	std::vector<unsigned char> stack(30000, 0);
	std::vector<std::size_t>	loopPos;
	size_t	head = 0;

	for (size_t it = 0; it < src.size(); it++)
	{
		switch (src[it])
		{
		case '<' :
			head--;
			break;
		case '>' :
			head++;
			break;
		case '+' :
			stack[head]++;
			break;
		case '-' :
			stack[head]--;
			break;
		case '.' :
			std::cout << stack[head] << std::flush;
			break;
		case ',' :
			std::cin >> std::noskipws >> stack[head];
			break;
		case '[' :
			if (stack[head] != 0)
				loopPos.push_back(it);
			else
			{
				it++;
				for (int skipbracket = 1; it < src.size() && skipbracket != 0; it++ )
				{
					if (src[it] == '[')
						skipbracket--;
					else if (src[it] == ']')
						skipbracket++;
				}
				it--;
			}
			break;
		case ']' :
			if (stack[head] != 0)
				it = loopPos.back();
			else
				loopPos.pop_back();
			break;
		}
	}
} */

#include "MindOpen.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Expected a Brainfuck source file as argument" << std::endl;
		return 1;
	}
	try
	{
		MindOpen brfk(av[1]);
		brfk.execute();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
