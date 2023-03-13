

#include "Serialization.hpp"

int main(void)
{
	srand(time(0));

	for (int i = 0; i < 5; i++)
	{
		void *raw = serialize();

		std::cout << "test " << i << ": " << '\n';
		Data *dt = deserialize(raw);

		std::cout << "\tstring1: " << dt->str1 << '\n';
		std::cout << "\tnum:    " << dt->num << '\n';
		std::cout << "\tstring2: " << dt->str2 << std::endl;

		delete static_cast<char*>(raw);
		delete dt;
	}

	return (0);
}
