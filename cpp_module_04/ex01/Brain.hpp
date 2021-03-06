#ifndef	__BRAIN_HPP__
#define	__BRAIN_HPP__

#include <iostream>
#include <string>

class Brain
{
private:
	std::string	_ideas[100];
public:
	void	think(const std::string& something);
	void	remeber(void);
	void	setIdeas(std::string *ideas);
	Brain(void);
	Brain(const Brain& origin);
	Brain(const std::string& something);
	~Brain(void);
	Brain& operator=(const Brain& other);
};

#endif
