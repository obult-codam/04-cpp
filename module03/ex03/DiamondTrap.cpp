#include <DiamondTrap.hpp>

#include <string>
#include <iostream>

DiamondTrap::DiamondTrap()
{

}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
    _hp = FragTrap::_hp;
    _energy = ScavTrap::_energy;
    _attackDamage = FragTrap::_attackDamage;
    
    ClapTrap::_name = name + "_clap_name";
    std::cout << "DiamondTrap " << _name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref)
{
    *this = ref;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& ref)
{
    _name = ref._name;
    _hp = ref._hp;
    _attackDamage = ref._attackDamage;
    _energy = ref._energy;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "diamond trap deleted" << std::endl;
}

std::string DiamondTrap::getDiaName() const
{
    return _name;
}

std::string DiamondTrap::getClapName() const
{
    return ClapTrap::_name;
}

std::ostream& operator<<(std::ostream & os, const DiamondTrap& fx)
{
    os <<
        fx.getDiaName() <<
        " is my DiaName" <<
        std::endl <<
        fx.getClapName() <<
        " is my ClapName" <<
        fx._hp << " " <<
        fx._energy << " " <<
        fx._attackDamage;
    return os;
}