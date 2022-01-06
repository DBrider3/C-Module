#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << BLUE << "Dog" << EOC << " Class Contructor!🐶" << std::endl;
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << BLUE << "Dog" << EOC << " Class Destructor~🐶" << std::endl;
	delete brain;
	brain = NULL;
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
}

// shallow copy
// Dog& Dog::operator = (const Dog& dog)
// {
// 	if (this == &dog)
// 		return (*this);
// 	type = dog.type;
// 	if (brain)
// 	{
// 		delete brain;
// 		brain = NULL;
// 	}
// 	brain = new Brain();
// 	brain = dog.brain;
// 	return (*this);
// }

// Deep Copy
Dog& Dog::operator = (const Dog& dog)
{
	if (this == &dog)
		return (*this);
	type = dog.type;
	if (brain)
	{
		delete brain;
		brain = NULL;
	}
	brain = new Brain();
	for (int i = 0; i < MAXIDEA; i++)
		brain->setIdeas(i, dog.getBrain()->getIdeas(i));
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << BLUE << "Dog!!!" << EOC << std::endl;
}

const Brain *Dog::getBrain() const
{
	return (brain);
}
