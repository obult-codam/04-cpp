#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal& ref);
        Animal& operator=(const Animal& ref);
        std::string getType() const;
        virtual void makeSound() const;
    protected:
        std::string type;
};

#endif