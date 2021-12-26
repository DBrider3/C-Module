#include "A.hpp"

A::A()
	{}

A::~A()
	{}

A::A(A& copy)
{
	*this = copy;
}

A& A::operator = (const A& a)
{
	if (this == &a)
		return (*this);
	return (*this);
}
