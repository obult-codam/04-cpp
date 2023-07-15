#include "Animal.hpp"

Animal::Animal()
{
    _myBrain = new Brain();
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
    delete _myBrain;
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
    _myBrain = new Brain();
    *_myBrain = *ref._myBrain;
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

void    Animal::setIdea(int index, std::string idea) const
{
    _myBrain->setIdea(index, idea);
}

std::string Animal::getIdea(int index) const
{
    // try
    // {
    //     return _myBrain->getIdea(index);
    // }
    // catch (std::exception& ref)
    // {
    //     std::cout << ref.what();
    // }
    return _myBrain->getIdea(index);
}
