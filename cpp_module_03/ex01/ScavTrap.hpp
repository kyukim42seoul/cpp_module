#ifndef	__SCAVTRAP_HPP__
#define	__SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ClapTrap;
class ScavTrap : public ClapTrap
{
public:
	void	guardGate(void);
	void	attack(const std::string& target);
	ScavTrap(void);
	ScavTrap(const ScavTrap& origin);
	ScavTrap(const std::string& name);
	~ScavTrap(void);
	ScavTrap& operator=(const ScavTrap& other);
};

#endif
