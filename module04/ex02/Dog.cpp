#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "I am a Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "I was a Dog" << std::endl;
}

Dog::Dog(const Dog& ref) : Animal(ref)
{
    std::cout << "copy dog" << std::endl;
}

Dog&    Dog::operator=(const Dog& ref)
{
    type = ref.type;
    _myBrain = new Brain();
    *_myBrain = *ref._myBrain;
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "barking \"Woof woof\"" << std::endl;
}
