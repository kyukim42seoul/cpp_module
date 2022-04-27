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

	std::cout << "-----makeSound() test-----" << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	std::cout << "-----Copy Constructor/Operator= test-----" << std::endl;

	Animal	*c_hamo = new Cat();
	Animal	*d_tomi = new Dog();
	Animal	*temp_sonya;

	temp_sonya = d_tomi;
	d_tomi = c_hamo;
	c_hamo->makeSound();
	d_tomi->makeSound();

	delete meta;
	delete i;
	delete j;
	delete c_hamo;
	delete temp_sonya;

	return(EXIT_SUCCESS);
}
