#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	Animal	*meta = new Animal();
	Animal	*i = new Cat();
	Animal	*j = new Dog();

	std::cout << meta->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;

	std::cout << "-----------------------" << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	return(EXIT_SUCCESS);
}
