#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;

	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete j;
	delete i;

	std::cout << "\n----- Let's think about... -----\n" << std::endl;

	std::string* ideas = new std::string[100];
	std::string* replaced_ideas = new std::string[100];

	std::cout << "What does Cat or Dog think?" << std::endl;
	for (int count = 0; !std::cin.eof() && count < 100; count++)
	{
		std::getline(std::cin, ideas[count]);
		if (ideas[count].empty())
		{
			std::cout << "(Original Ideas Set Complete)" << std::endl;
			break ;
		}
	}
	std::cout << "10 minutes later...\nWhat does Cat or Dog think now?" << std::endl;
	for (int index = 0; !std::cin.eof() && index < 100; index++)
	{
		std::getline(std::cin, replaced_ideas[index]);
		if (replaced_ideas[index].empty())
		{
			std::cout << "(Replaced Ideas Set Complete)" << std::endl;
			break ;
		}
	}

	std::cout << "\n----- OCCF Test Cat -----\n" << std::endl;

	Cat	A;
	A.getBrain().setIdeas(ideas);

	Cat	B(A);
	Cat	C;

	C = B;

	std::cout << "\n----- A Brain -----\n" << std::endl;
	A.getBrain().remeber();
	std::cout << "\n----- C Brain -----\n" << std::endl;
	C.getBrain().remeber();

	C.getBrain().setIdeas(replaced_ideas);

	std::cout << "\n----- After A Brain -----\n" << std::endl;
	A.getBrain().remeber();
	std::cout << "\n----- After C Brain -----\n" << std::endl;
	C.getBrain().remeber();

	std::cout << "\n----- OCCF Test Dog -----\n" << std::endl;

	Dog	D;
	D.getBrain().setIdeas(ideas);
	delete[] ideas;

	Dog	E(D);
	Dog	F;

	F = E;

	std::cout << "\n----- D Brain -----\n" << std::endl;
	D.getBrain().remeber();
	std::cout << "\n----- F Brain -----\n" << std::endl;
	F.getBrain().remeber();

	F.getBrain().setIdeas(replaced_ideas);
	delete[] replaced_ideas;

	std::cout << "\n----- After D Brain -----\n" << std::endl;
	D.getBrain().remeber();
	std::cout << "\n----- After F Brain -----\n" << std::endl;
	F.getBrain().remeber();

	std::cout << "\n----- Animal Array with Half Dogs & Half Cats -----\n" << std::endl;

	Animal*	flock[10];

	std::cout << "\n----- Alloc -----\n" << std::endl;

	for (int number = 0; number < 10; number++)
	{
		if (number % 2)
			flock[number] = new Dog();
		else
			flock[number] = new Cat();
	}

	std::cout << "\n----- Free -----\n" << std::endl;

	for (int delCount = 0; delCount < 10; delCount++)
		delete flock[delCount];

	std::cout << "\n----- Done -----\n" << std::endl;

	return(EXIT_SUCCESS);
}
