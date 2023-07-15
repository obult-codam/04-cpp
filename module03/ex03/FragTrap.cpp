#include <FragTrap.hpp>

#include <string>
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "nameless FragTrap created" << std::endl;
    _hp = 100;
    _energy = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Frag " << name << std::endl;
    _hp = 100;
    _energy = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& ref) : ClapTrap(ref)
{
    *this = ref;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	_attackDamage = ref._attackDamage;
	_energy = ref._energy;
	_hp = ref._hp;
	_name = ref._name;
	return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag destruction" << std::endl;
}

void    FragTrap::highFiveGuys(void)
{
    std::cout << "positively high five me person" << std::endl;
}
