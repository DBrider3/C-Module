#include "Brain.hpp"

Brain::Brain()
{
	std::cout << PRPL << "Brain" << EOC << " Class Contructor!💡" << std::endl;
}

Brain::~Brain()
{
	std::cout << PRPL << "Brain" << EOC << " Class Destructor~💡" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
}

Brain& Brain::operator = (const Brain& brain)
{
	if (this == &brain)
		return (*this);
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
	return (*this);
}

const std::string& Brain::getIdeas(int index) const
{
	return (ideas[index]);
}

void Brain::setIdeas(int index, std::string idea)
{
	ideas[index] = idea;
}
