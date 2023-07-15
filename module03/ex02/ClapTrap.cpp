#include <ClapTrap.hpp>

#include <string>
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "Why not give it a name?" << std::endl;
	_hp = 10;
	_energy = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "ClapTrap " << _name << " created" << std::endl;
	_hp = 10;
	_energy = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	*this = ref;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ref)
{
	_attackDamage = ref._attackDamage;
	_energy = ref._energy;
	_hp = ref._hp;
	_name = ref._name;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " critical repair needed!" << std::endl;
}

// obsolete because target name is given instead of target ClapTrap
const std::string	ClapTrap::getName()
{
	return _name;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hp && _energy)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		// target.takeDamage(_attackDamage);
		_energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " took " << amount << " damage" << std::endl;
	_hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp && _energy)
	{
		std::cout << "ClapTrap " << _name << " repaired " << amount << " hitpoints" << std::endl;
		_hp += amount;
		_energy--;
	}
	std::cout << "ClapTrap update: hp " << _hp << " , energy points : " << _energy << std::endl;
}
