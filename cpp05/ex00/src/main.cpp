// exceptions

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat bur("James", 1);
		std::cout <<  bur << std::endl; // 1
		// increment example
		bur.incrementGrade();
		std::cout << bur << std::endl; // 2
		// decrement example
		bur.decrementGrade();
		std::cout << bur << std::endl; // 1
		// exception throw example
		bur.decrementGrade(); // 0, error
		std::cout << bur << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try
	{
		// copy constructor called
		Bureaucrat bur2("dcho", 149);
		Bureaucrat bur3(bur2);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try
	{
		// exception throw example
		Bureaucrat bur4("bob", 151);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
