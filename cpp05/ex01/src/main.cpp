// exceptions

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	// 1. Constructor try catch
	try
	{
		std::cout << "Bureaucrat constructor" << std::endl;
		std::cout << "------------------------------" << std::endl;
		Bureaucrat jim("jim", 42);
		Bureaucrat james("james", 235); // GradeTooHighException
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Form constructor" << std::endl;
		std::cout << "------------------------------" << std::endl;
		Form a("a", 1, 5);
		Form b("b", -42, -42); // GradeTooLowException
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	// 2. besigned, signform
	try
	{
		std::cout << "besigned, signform Test" << std::endl;
		std::cout << "------------------------------" << std::endl;
		Form c("c", 1, 2);
		Form d("d", 100, 100);
		Bureaucrat amy("amy", 5);
		amy.signForm(c); // GradeTooLowException
		amy.signForm(d); // sigin ok
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
