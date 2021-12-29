#include "Array.hpp"

int main(void)
{
	Array<int> a;
	std::cout << a.size() << std::endl;

	std::cout << std::endl;
	Array<int> b(5);
	for (size_t i = 0; i < b.size(); i++)
		b[i] = i;
	for (size_t i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;
	std::cout << b.size() << std::endl;




	return (0);
}
