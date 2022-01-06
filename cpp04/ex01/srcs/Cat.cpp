#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << YELLOW << "Cat" << EOC << " Class Contructor!🐱" << std::endl;
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << YELLOW << "Cat" << EOC << " Class Destructor~🐱" << std::endl;
	delete brain;
	brain = NULL;
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
}

// shallow copy
// Cat& Cat::operator = (const Cat& cat)
// {
// 	if (this == &cat)
// 		return (*this);
// 	type = cat.type;
// 	if (brain)
// 	{
// 		delete brain;
// 		brain = NULL;
// 	}
// 	brain = new Brain();
// 	brain = cat.brain;
// 	return (*this);
// }

// Deep Copy
Cat& Cat::operator = (const Cat& cat)
{
	if (this == &cat)
		return (*this);
	type = cat.type;
	if (brain)
	{
		delete brain;
		brain = NULL;
	}
	brain = new Brain();
	for (int i = 0; i < MAXIDEA; i++)
		brain->setIdeas(i, cat.getBrain()->getIdeas(i));
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << YELLOW << "Cat!!!" << EOC << std::endl;
}

Brain *Cat::getBrain() const
{
	return (brain);
}
