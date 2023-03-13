

#include "MindOpen.hpp"

/* ************************************************************************** */
MindOpen::MindOpen(void) :
	ptr(0)	{}

MindOpen::MindOpen(char *path)
{
	std::vector<unsigned char> copy(30000, 0);
	char c;
	ptr = 0;
	stack = copy;
	fd.open(path);
	if (!fd.is_open())
	{
		throw	MindOpen::OpenException();
		this->~MindOpen();
		return ;
	}
	while (fd.get(c))
		src.push_back(c);
	fd.close();
	if (!this->check())
		throw MindOpen::NotValid();
}

MindOpen::MindOpen(const MindOpen& src)
{
	(void)src;
}

MindOpen::~MindOpen(void)	{}

/*************************************************************************** */
MindOpen&	MindOpen::operator=(const MindOpen& src)
{
	(void)src;
	return *this;
}
/* ************************************************************************** */
void		MindOpen::execute()
{
	std::vector<std::size_t>	loopPos;
	size_t	head = 0;

	for (size_t it = 0; it < src.size(); it++)
	{
		switch (this->src[it])
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
}

bool	MindOpen::check(void) const
{
	std::stack<char>		s;

	for(size_t i = 0; i < this->src.size(); i++)
	{
		if (src[i] != '[' && src[i] != ']')
			continue ;
		if (src[i] == '[')
			s.push(src[i]);
		else if (s.empty())
			return false;
		if (src[i] == ']')
			s.pop();
	}
	return (s.empty());
}
/* ************************************************************************** */
const  char* MindOpen::OpenException::what() const throw()
{
	return "Error: Can't open the file for reading";
}

const  char* MindOpen::NotValid::what() const throw()
{
	return "Error: File not valid";
}
