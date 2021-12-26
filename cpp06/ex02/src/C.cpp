#include "C.hpp"

C::C()
	{}

C::~C()
	{}

C::C(C& copy)
{
	*this = copy;
}

C& C::operator = (const C& c)
{
	if (this == &c)
		return (*this);
	return (*this);
}
