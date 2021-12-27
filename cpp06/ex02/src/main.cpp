#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void)
{
	Base *basePointer;

	basePointer = generate();
	identify(basePointer);
	Base &baseRef(*basePointer);
	identify(baseRef);


	return (0);
}
