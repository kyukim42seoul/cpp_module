#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
private:
	int			number;
	std::string	name;
public:
	void		announce(void);
	void		setNumber(int number);
	int			getNumber(void);
	void		setName(std::string name);
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
};

Zombie*	zombieHorde(int N, std::string name);
void	testZombies(int N, Zombie *zombieHorde);

#endif
