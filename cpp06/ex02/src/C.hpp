#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C : public Base
{
	public:
		C();
		~C();
		C(C& copy);
		C& operator = (const C& c);
};
