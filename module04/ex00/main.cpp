#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    const WrongAnimal* k = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();
    std::cout << l->getType() << " " << std::endl;
    k->makeSound();
    l->makeSound(); //will not output the cat sound!

    std::cout << std::endl;

    delete meta;
    delete i;
    delete j;
    delete k;
    delete l;
}