#include "Dog.hpp"

void	Dog::makeSound(void)
{
	std::cout << "WangWang!!" << std::endl;
}

void	Dog::thinkMaster(const std::string& name)
{
	brain->think(name);
}

void	Dog::isThinking(void)
{
	std::cout << "Dog is thinking..." << std::endl;
	brain->remeber();
}

Dog::Dog(void) : Animal()
{
	std::cout << "Dog : Default Constructor is called" << std::endl;
	brain = new Brain;
	type = "Dog";
}

Dog::Dog(const Dog& origin)
{
	std::cout << "Dog : Copy Constructor called" << std::endl;
	*this = origin;
}

Dog::Dog(const std::string& idea)
{
	std::cout << "Dog : Overloaded Constructor called" << std::endl;
	brain = new Brain(idea);
}

Dog::~Dog(void)
{
	std::cout << "Dog : Destructore is called" << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog : Operator= called" << std::endl;
	Animal::operator=(other);
	delete brain;
	this->brain = new Brain(*other.brain);
	return (*this);
}
