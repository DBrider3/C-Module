#include "Base.hpp"

Base::Base()
	{}

Base::~Base()
	{}

Base::Base(Base& copy)
{
	*this = copy;
}

Base& Base::operator = (const Base& base)
{
	if (this == &base)
		return (*this);
	return (*this);
}

Base * Base::generate(void)
{

}

void Base::identify(Base* p)
{

}

void Base::identify(Base& p)
{

}
