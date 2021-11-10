#include <iostream>
#include "Phonebook.hpp"

int main(void)
{
	PhoneBook a;
	std::string input;
	while (1)
	{
		std::cout << "Please Enter The Command :";
		std::cin >> input;
		for(size_t i = 0; i < input.size(); i++)
			input[i] = toupper(input[i]);
		if (input == "EXIT")
			return 0;
		else if (input == "ADD")
		{
			a.add();
			std::cout << "ADD!!" << std::endl;
		}
		else if (input == "SEARCH")
		{
			std::cout << "SEARCH!!" << std::endl;
		}
		else
		{
			std::cout << "Not Vaild Command!!" << std::endl;
		}
	}
	return 0;
}
