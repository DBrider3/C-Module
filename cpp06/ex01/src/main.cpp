#include "Serialization.hpp"

int main(void)
{
	Serialization a;
	//unsigned int i = 10;
	//uintptr_t ptr = i;
	Data *d = NULL;
	Data *copyD = NULL;
	uintptr_t tmp;
	tmp = a.serialize(d);
	std::cout << d << std::endl;
	std::cout << tmp << std::endl;
	copyD = a.deserialize(tmp);
	std::cout << copyD << std::endl;

	return (0);
}
