#ifndef	__FRAGTRAP_HPP__
#define	__FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class ClapTrap;
class FragTrap : public ClapTrap
{
public:
	void	highFivesGuys(void);
	FragTrap(void);
	FragTrap(const FragTrap& origin);
	FragTrap(const std::string& name);
	~FragTrap(void);
	FragTrap& operator=(const FragTrap& other);
};

#endif
