#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);

	std::vector<int>::iterator it = v.begin();
	while(it < v.end())
	{
		std::cout << *it;
		if (it < v.end() - 1)
			std::cout << ", ";
		it++;
	}
	std::cout << std::endl;
	try
	{
		std::vector<int>::iterator it_1 = easyfind(v, 8);
		std::cout << "find!, " << *it_1 << std::endl;
		std::vector<int>::iterator it_2 = easyfind(v, 10);
		std::cout << "find!, " << *it_2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
