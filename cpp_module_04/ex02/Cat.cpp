#include "Cat.hpp"

class Brain;

void	Cat::makeSound(void)
{
	std::cout << "..." << std::endl;
}

void	Cat::thinkFood(const std::string& food)
{
	brain->think(food);
}

void	Cat::isThinking(void)
{
	std::cout << "Cat is thinking..." << std::endl;
	brain->remeber();
}

Cat::Cat(void) : Animal()
{
	std::cout << "Cat : Default Constructor is called" << std::endl;
	brain = new Brain;
	type = "Cat";
}

Cat::Cat(const Cat& origin)
{
	std::cout << "Cat : Copy Constructor called" << std::endl;
	*this = origin;
}

Cat::Cat(const std::string& idea)
{
	std::cout << "Cat : Overloaded Constructor called" << std::endl;
	brain = new Brain(idea);
}

Cat::~Cat(void)
{
	std::cout << "Cat : Destructore is called" << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat : Operator= called" << std::endl;
	Animal::operator=(other);
	delete brain;
	this->brain = new Brain(*other.brain);
	return (*this);
}
