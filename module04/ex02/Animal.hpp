#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
    public:
        Animal();
        virtual ~Animal() = 0;
        Animal(const Animal& ref);
        Animal& operator=(const Animal& ref);
        std::string getType() const;
        virtual void makeSound() const = 0;

        std::string getIdea(int index) const;
        void setIdea(int index, std::string idea) const;
    protected:
        std::string type;
        Brain*  _myBrain;
};

#endif