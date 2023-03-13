

#include "CentralBureaucracy.hpp"

/* ************************************************************************** */

CentralBureaucracy::CentralBureaucracy(void) :
	queue(0), employers(0)
{
	for (int i = 0; i < 20; i++)
	{
		srand(time(0));
		ob[i].setNewIntern(&intern[i]);
	}
}

CentralBureaucracy::CentralBureaucracy(const CentralBureaucracy& src)
{
	(void)src;
}

CentralBureaucracy::~CentralBureaucracy(void)
{}
/* ************************************************************************** */

CentralBureaucracy&		CentralBureaucracy::operator=(const CentralBureaucracy& src)
{
	(void)src;
	return *this;
}

CentralBureaucracy&	operator<<(CentralBureaucracy& _cb, Bureaucrat& _empl)
{
	_cb.feed(_empl);
	return _cb;
}
/* ************************************************************************** */
void	CentralBureaucracy::queueUp(const std::string& _target)
{
	if (_Q == 0)
	{
		queue = new std::string[1];
		queue[0] = _target;
		_Q++;
	}
	else
	{
		std::string *copy = new std::string[_Q + 1];
		for (int i = 0; i < _Q; i++)
			copy[i] = queue[i];
		delete [] queue;
		queue = copy;
		queue[_Q] = _target;
		_Q++;
	}
}

void	CentralBureaucracy::feed(Bureaucrat& _brct)
{
	int	fulloffice;

	if (employers >= 40)
		throw CentralBureaucracy::CentralBureaucracyException();
	fulloffice = employers / 2;
	if (employers % 2 == 0)
		ob[fulloffice].setNewSigner(&_brct);
	else
		ob[fulloffice].setNewExecuter(&_brct);
	employers++;
}

void	CentralBureaucracy::doBureacracy(void)
{
	std::string TheForm[13] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon",
								"Shrubbery Creation", "Robotomy Request", "Presidential Pardon",
								"Shrubbery Creation", "Robotomy Request", "Presidential Pardon",
								"Shrubbery Creation", "Robotomy Request", "Presidential Pardon",
								"Some other Form"};
	for (int i = 0; i < _Q; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			try
			{
				ob[i].doBureaucracy(TheForm[rand() % 13], queue[i]);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
}

const char* CentralBureaucracy::CentralBureaucracyException::what() const throw()
{
	return "This Central Office is already full, try another one or ask to your uncle, he kwnow the right people...";
}
