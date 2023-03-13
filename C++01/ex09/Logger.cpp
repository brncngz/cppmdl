

#include "Logger.hpp"

void	Logger::logToConsole(std::string const & log)
{
	std::cout << log << std::endl;
}

void	Logger::logToFile(std::string const & log)
{
	std::ofstream	fd;

	fd.open(_file, std::ofstream::app);
	if (fd.is_open())
		fd << log << std::endl;
	fd.close();
}

std::string		Logger::makeLogEntry(std::string const & str)
{
	std::string		log;
	std::string		num;
	time_t			t;
	struct	tm	*tm;

	t = time(0);
	tm = localtime(&t);
	num = std::to_string(tm->tm_year + 1900);
	log = "[" + num;
	num = std::to_string(tm->tm_mon + 1);
	log += "-" + num;
	num = std::to_string(tm->tm_mday);
	log += "-" + num;
	num = std::to_string(tm->tm_hour);
	log += " " + num;
	num = std::to_string(tm->tm_min);
	log += ":" + num;
	num = std::to_string(tm->tm_sec);
	log += ":" + num;
	log += "] " + str;
	return (log);
}

typedef	void	(Logger::*f_dest)	(std::string const & log);
typedef	std::string (Logger::*entry)	(std::string const & log);

void	Logger::log(std::string const & dest, std::string const & mssg)
{
	std::string		arr_d[2] = {"console", "file"};
	std::string		log;
	f_dest		dests[2] = {&Logger::logToConsole, &Logger::logToFile};
	entry		entrys = &Logger::makeLogEntry;
	int			i;

	log = (this->*entrys) (mssg);
	for (i = 0; i < 2 ; i++)
	{
		if (dest == arr_d[i])
			(this->*dests[i])(log);
	}
}

Logger::Logger(std::string name)
{
	_file = name;
}

Logger::~Logger(void)
{}
