#include "B.hpp"

B::B()
	{}

B::~B()
	{}

B::B(B& copy)
{
	*this = copy;
}

B& B::operator = (const B& b)
{
	if (this == &b)
		return (*this);
	return (*this);
}
