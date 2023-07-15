#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <ClapTrap.hpp>

class	ScavTrap : public ClapTrap 
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& ref);
	ScavTrap& operator=(const ScavTrap& ref);
	~ScavTrap();
	void	guardGate();
	void	attack(const std::string& target);
};

#endif
