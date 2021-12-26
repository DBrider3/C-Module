#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{
	public:
		Base();
		virtual ~Base();
		Base(Base& copy);
		Base& operator = (const Base& base);

		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
};
