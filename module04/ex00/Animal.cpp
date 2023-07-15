#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal& ref)
{
    *this = ref;
    std::cout << "Animal copied" << std::endl;
}

Animal& Animal::operator=(const Animal& ref)
{
    std::cout << "Animal = overload!!!" << std::endl;
    type = ref.type;
    return *this;
}

void    Animal::makeSound() const
{
    std::cout << "bare Animal does not make sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}