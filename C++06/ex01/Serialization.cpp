

#include "Serialization.hpp"

void *	serialize(void)
{
	std::string	base = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	size_t		size = base.length();

	char *raw;

	raw = new char[20];
	for (int i = 0; i < 8; i++)
		raw[i] = base[rand() % size];
	*reinterpret_cast<int*>(raw + 8) = rand() % 12345;
	for (int i = 0; i < 8; i++)
		raw[i + 12] = base[rand() % size];
	return raw;
}

Data * deserialize(void* raw)
{
	Data *_d = new Data;

	_d->str1 = std::string(static_cast<char*>(raw), 8);
	_d->num = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	_d->str2 = std::string(static_cast<char*>(raw) + 12, 8);
	return _d;
}
