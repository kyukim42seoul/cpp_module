#include "Dog.hpp"
#include "Cat.hpp"
#include <sstream>

int	main()
{
	Cat		*cat_a = new Cat("Fish");
	Cat		*cat_b = new Cat("Meat");
	Dog		*dog_a = new Dog("Joe");
	Dog		*dog_b = new Dog("Andy");
	Animal	flocks[4];

	flocks[0] = *cat_a;
	flocks[1] = *cat_b;
	flocks[2] = *dog_a;
	flocks[3] = *dog_b;

	std::cout << "cat_a : ";
	cat_a->isThinking();
	std::cout << "cat_b : ";
	cat_b->isThinking();
	std::cout << "dog_a : ";
	dog_a->isThinking();
	std::cout << "dog_b : ";
	dog_b->isThinking();

	std::cout << "-----Copy Test-----" << std::endl;

	Cat		copy_cat_a;
	Cat		copy_cat_b;
	Dog		copy_dog_a;
	Dog		copy_dog_b;

	copy_cat_a = *cat_a;
	copy_cat_b = *cat_b;
	copy_dog_a = *dog_a;
	copy_dog_b = *dog_b;

	copy_cat_a.thinkFood("More fishes");
	copy_cat_b.thinkFood("More Meat");
	copy_dog_a.thinkMaster("Emily");
	copy_dog_b.thinkMaster("Helena");

	std::cout << "-----Origin Think-----" <<std::endl;
	cat_a->isThinking();
	cat_b->isThinking();
	dog_a->isThinking();
	dog_b->isThinking();

	std::cout << "-----Copy Think-----" <<std::endl;
	copy_cat_a.isThinking();
	copy_cat_b.isThinking();
	copy_dog_a.isThinking();
	copy_dog_b.isThinking();

	delete cat_a;
	delete cat_b;
	delete dog_a;
	delete dog_b;
	std::cout << "-----Heap Class Destruct Over-----" <<std::endl;

	return(EXIT_SUCCESS);
}
