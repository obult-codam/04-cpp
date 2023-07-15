#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref)
{
    *this = ref;
    std::cout << "WrongAnimal copied" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
    std::cout << "WrongAnimal = overload!!!" << std::endl;
    type = ref.type;
    return *this;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "bare WrongAnimal does not make sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}
