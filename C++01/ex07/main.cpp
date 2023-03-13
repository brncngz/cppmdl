

#include <fstream>
#include <iostream>
#include <string>

void	ft_replace(std::ifstream& fd, std::string name, std::string s1, std::string s2)
{
	std::ofstream	ret;
	std::string		text;
	std::size_t		pos;
	std::size_t		i = 0;

	ret.open(name + ".replace", std::ofstream::trunc);
	if (ret.is_open())
	{
		std::getline(fd, text, '\0');
		pos = text.find(s1);
		while (pos != std::string::npos)
		{
			while (i != pos)
				ret << text[i++];
			ret << s2;
			i += s1.size();
			pos = text.find(s1, i);
		}
		while (i != text.size())
			ret << text[i++];
	}
	else
		std::cout << "Error: Cannot create " << name << ".replace" << std::endl;
	return ;
}

int		main(int ac, char **av)
{

	if (ac != 4)
	{
		std::cout << "Wrong number of args" << std::endl;
		return (1);
	}

	std::string		name = av[1];
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::ifstream	fd;
	fd.open(av[1]);
	if (fd.is_open() && (s1.length() > 0) && (s2.length() > 0))
	{
		ft_replace(fd, name, s1, s2);
		fd.close();
	}
	else
		std::cout << "File " << av[1] << " not found" << std::endl;
	return (0);
}
