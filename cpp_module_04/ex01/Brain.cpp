#include "Brain.hpp"

void	Brain::thinking(std::string type)
{
	if (type == "Cat")
	{
		ideas[0] = "Fish";
		ideas[1] = "Toys";
		ideas[2] = "Chur";
	}
	else if (type == "Dog")
	{
		ideas[0] = "Master";
		ideas[1] = "Master!";
		ideas[2] = "Master!!";
		ideas[3] = "Master!!!";
	}
}

Brain::Brain(void)
{
	std::cout << "Brain : Default Constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain : Destructor called" << std::endl;
}