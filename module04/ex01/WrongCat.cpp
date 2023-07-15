#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "I am a WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "I was a WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat& ref)
{
    *this = ref;
}

WrongCat& WrongCat::operator=(const WrongCat& ref)
{
    type = ref.type;
    return *this;
}

void    WrongCat::makeSound() const
{
    std::cout << "Miaaauw" << std::endl;
}
