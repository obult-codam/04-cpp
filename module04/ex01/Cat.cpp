#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "I am a Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "I was a Cat" << std::endl;
}

Cat::Cat(const Cat& ref) : Animal(ref)
{
    std::cout << "copy Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& ref)
{
    type = ref.type;
    _myBrain = new Brain();
    *_myBrain = *ref._myBrain;
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Miaaauw" << std::endl;
}