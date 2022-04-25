#ifndef	__FRAGTRAP_HPP__
#define	__FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class ClapTrap;
class FragTrap : public ClapTrap
{
private:
	
public:
	void	highFivesGuys(void);
	FragTrap(void);
	FragTrap(const std::string& name);
	~FragTrap(void);
};


#endif
