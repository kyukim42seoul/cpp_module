#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;
class Cat : public Animal
{
private:
	Brain*	brain;
public:
	void	makeSound(void);
	void	thinkFood(const std::string& food);
	void	isThinking(void);
	Cat(void);
	Cat(const Cat& origin);
	Cat(const std::string& idea);
	~Cat(void);
	Cat& operator=(const Cat& other);
};

#endif
