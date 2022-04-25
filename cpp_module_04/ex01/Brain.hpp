#ifndef	__BRAIN_HPP__
#define	__BRAIN_HPP__

#include <iostream>
#include <string>

class Brain
{
private:
	std::string	ideas[100];
public:
	void	thinking(std::string type);
	Brain(void);
	~Brain(void);
};

#endif
