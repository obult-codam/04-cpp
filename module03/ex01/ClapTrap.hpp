#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>

class	ClapTrap
{
private:
protected:
	std::string		_name;
	int				_hp;
	int				_energy;
	int				_attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ref);
	ClapTrap& operator=(const ClapTrap& ref);
	~ClapTrap();

	const std::string	getName();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
