#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal& ref);
        WrongAnimal& operator=(const WrongAnimal& ref);
        std::string getType() const;
        void makeSound() const;
    protected:
        std::string type;
};

#endif
