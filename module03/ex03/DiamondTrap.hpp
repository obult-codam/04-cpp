#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include <ScavTrap.hpp>
#include <FragTrap.hpp>

class	DiamondTrap : public virtual FragTrap, public virtual ScavTrap
{
private:
	std::string	_name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& ref);
	DiamondTrap& operator=(const DiamondTrap& ref);
	~DiamondTrap();

	// GETTERS
	std::string	getDiaName() const;
	std::string getClapName() const;

	friend std::ostream& operator<<(std::ostream & os, const DiamondTrap& fx);
};

std::ostream& operator<<(std::ostream & os, const DiamondTrap& fx);

#endif
