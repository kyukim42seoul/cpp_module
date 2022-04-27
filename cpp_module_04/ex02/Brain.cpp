#include "Brain.hpp"

void	Brain::think(const std::string& something)
{
	ideas[0] = something;
}

void	Brain::remeber(void)
{
	int	count = 0;

	while (!ideas[count].empty())
	{
		std::cout << ideas[count] << std::endl;
		count++;
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
	ideas[0] = something;
}

Brain::~Brain(void)
{
	std::cout << "Brain : Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain : Operator= called" << std::endl;
	for (int count = 0; count < 100; count++)
	{
		int temp;

		temp = other.ideas[count].empty();
		switch (temp)
		{
		case 1:
			this->ideas[count] = other.ideas[count];
		default:
			;
		}
	}
	return (*this);
}
