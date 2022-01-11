#include "Serialization.hpp"

int main(void)
{
	Serialization a;

	Data *d = new Data;
	d->i = 10;
	Data *copyD = NULL;
	uintptr_t tmp;
	tmp = a.serialize(d);
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Data Structure D value: " << d->i << std::endl;
	std::cout << "Take a Data address use serialize: " << tmp << std::endl; // Serialization
	copyD = a.deserialize(tmp);
	std::cout << "Data Structure copyD value: " << copyD->i << std::endl;
	printf("d Address: %p\ncopyD Address:  %p\n", d, copyD);
	delete copyD; // copyD, d variables same address
	d = NULL;
	copyD = NULL;
	return (0);
}
