#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << YELLOW << "Cat" << EOC << " Class Contructor!🐱" << std::endl;
}

Cat::~Cat()
{
	std::cout << YELLOW << "Cat" << EOC << " Class Destructor~🐱" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
}

Cat& Cat::operator = (const Cat& cat)
{
	if (this == &cat)
		return (*this);
	type = cat.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << YELLOW << "Cat!!!" << EOC << std::endl;
}