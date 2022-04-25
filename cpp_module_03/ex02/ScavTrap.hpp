#ifndef	__SCAVTRAP_HPP__
#define	__SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ClapTrap;
class ScavTrap : public ClapTrap
{
private:

public:
	void	guardGate(void);
	ScavTrap(void);
	ScavTrap(const std::string& name);
	~ScavTrap(void);
};

#endif
