// #include "Zombie.hpp"

#include <iostream>


int	main(void)
{
	int *value = new(std::nothrow)int;
	if (!value)
		std::cout << "Could not allocate memory";
	else
		std::cout << "allocate memory";

	return (0);
}