#include "Brain.hpp"

void	Brain::think(const std::string& something)
{
	_ideas[0] = something;
}

void	Brain::remeber(void)
{
	for (int count = 0; count < 100 && !_ideas[count].empty(); count++)
	{
		std::cout << _ideas[count] << std::endl;
	}
}

void	Brain::setIdeas(std::string *ideas)
{
	for (int count = 0; !ideas[count].empty() && count < 100; count++)
	{
		_ideas[count] = ideas[count];
	}
}

Brain::Brain(void)
{
	std::cout << "Brain : Default Constructor called" << std::endl;
}

Brain::Brain(const Brain& origin)
{
	*this = origin;
}

Brain::Brain(const std::string& something)
{
	_ideas[0] = something;
}

Brain::~Brain(void)
{
	std::cout << "Brain : Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain : Operator= called" << std::endl;
	if (this == &other)
		return (*this);
	for (int count = 0; !other._ideas[count].empty(); count++)
	{
		this->_ideas[count] = other._ideas[count];
	}
	return (*this);
}
