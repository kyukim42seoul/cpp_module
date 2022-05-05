#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int	main()
{
	std::cout << "\n----- START -----\n" << std::endl;

	Animal	*meta = new Animal();
	Animal	*j = new Dog();
	Animal	*i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	std::cout << "\n----- makeSound() Test -----\n" << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << "\n----- Wrong Test -----\n" << std::endl;
	std::cout << "----- UpCasting -----\n" << std::endl;

	WrongAnimal*	joy = new WrongCat();

	std::cout << joy->getType() << std::endl;
	joy->makeSound();

	std::cout << "\n----- Normal -----\n" << std::endl;

	WrongCat*	toy = new WrongCat();
	std::cout << toy->getType() << std::endl;
	toy->makeSound();

	delete joy;
	delete toy;

	std::cout << "\n----- OCCF Test Animal -----\n" << std::endl;

	Animal	A;
	Animal	B(A);
	Animal	C;

	C = B;

	std::cout << "\n----- OCCF Test Cat -----\n" << std::endl;

	Cat	D;
	Cat	E(D);
	Cat	F;

	F = E;

	std::cout << "\n----- OCCF Test Dog -----\n" << std::endl;

	Dog	G;
	Dog	H(G);
	Dog	I;

	I = H;

	std::cout << "\n----- Done -----\n" << std::endl;

	return(EXIT_SUCCESS);
}
