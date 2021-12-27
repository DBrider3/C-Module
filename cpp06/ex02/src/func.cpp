#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

# define CLASS_A 1
# define CLASS_B 2
# define CLASS_C 3

Base * generate(void)
{
	srand((unsigned int)time(NULL));
	for (int i = CLASS_A; i <= CLASS_C; i++)
	{
		int num = rand();
		int classNumber = (static_cast<int>(num) % 3 + 1);
		if (classNumber == CLASS_A)
		{
			std::cout << "A" << std::endl;
			return (new A());
		}
		else if (classNumber == CLASS_B)
		{
			std::cout << "B" << std::endl;
			return (new B());
		}
		else
		{
			std::cout << "C" << std::endl;
			return (new C());
		}
	}
	return (NULL);
}

// NULL
void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if (a != NULL)
		std::cout << "Pointer func This Class A!" << std::endl;
	else if (b != NULL)
		std::cout << "Pointer func This Class B!" << std::endl;
	else if (c != NULL)
		std::cout << "Pointer func This Class C!" << std::endl;
}

// try catch
void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Ref func This Class A!" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Ref func This Class B!" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Ref func This Class C!" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}
