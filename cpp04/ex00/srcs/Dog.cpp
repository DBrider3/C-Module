#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << BLUE << "Dog" << EOC << " Class Contructor!🐶" << std::endl;
}

Dog::~Dog()
{
	std::cout << BLUE << "Dog" << EOC << " Class Destructor~🐶" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
}

Dog& Dog::operator = (const Dog& dog)
{
	if (this == &dog)
		return (*this);
	type = dog.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << BLUE << "Dog!!!" << EOC << std::endl;
}