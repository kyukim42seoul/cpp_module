#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	brain;
public:
	void	makeSound(void);
	Cat(void);
	~Cat(void);
};

#endif
