

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>

struct Data
{
	std::string str1;
	int			num;
	std::string	str2;
};

void * serialize(void);
Data * deserialize(void * raw);

#endif
