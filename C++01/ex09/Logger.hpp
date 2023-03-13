

#ifndef	LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <string>

class Logger
{
private:
	std::string		_file;
	void			logToConsole(std::string const & str);
	void			logToFile(std::string const & str);
	std::string		makeLogEntry(std::string const & str);
public:
	void	log(std::string const & dest, std::string const & message);
	Logger(std::string	name);
	~Logger(void);
};

#endif
