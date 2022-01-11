#include "Intern.hpp"

int main ()
{
	try
	{
		Bureaucrat dcho("dcho", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		dcho.signForm(*rrf);
		dcho.executeForm(*rrf);
		delete rrf;
		rrf = NULL;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------------" << std::endl;
	try
	{
		Bureaucrat dcho("dcho", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		dcho.signForm(*rrf);
		dcho.executeForm(*rrf);
		delete rrf;
		rrf = NULL;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------------" << std::endl;
	try
	{
		Bureaucrat dcho("dcho", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		dcho.signForm(*rrf);
		dcho.executeForm(*rrf);
		delete rrf;
		rrf = NULL;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------------" << std::endl;
	try
	{
		Bureaucrat dcho("dcho", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("invalid form", "Bender");
		dcho.signForm(*rrf);
		dcho.executeForm(*rrf);
		delete rrf;
		rrf = NULL;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------------" << std::endl;
	// system("leaks a.out");
	return 0;
}
