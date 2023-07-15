#include <Brain.hpp>

#include <string>
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain turned on!" << std::endl;
}

Brain::Brain(const Brain& ref)
{
    *this = ref;
}

Brain&	Brain::operator=(const Brain& ref)
{
    for (int i = 0; i < 100; i++)
    {
        _ideas[i] = ref._ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain turned off.." << std::endl;
}

void    Brain::setIdea(int index, std::string idea)
{
    if (index < 0 || index > 99)
        return ;
    _ideas[index] = idea;
}

std::string Brain::getIdea(int index)
{
    if (index < 0 || index > 99)
        throw Brain::OutOfBound();
    return _ideas[index];
}

const char* Brain::OutOfBound::what() const throw ()
{
    return "Out of bound\n";
}
