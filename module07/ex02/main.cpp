// int * a = new int(); then display *a
#include <iostream>
#include "Array.hpp"

int main(void)
{
    Array<int> ints(5);

    for (int i = 0; i < 5; i++)
        ints[i] = 1;

    Array<int> cpy = ints;

    for (int i = 0; i < 5; i++)
        std::cout << cpy[i] << std::endl;

    try {
        cpy[15] = 3;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    int * a = new int();
    std::cout << *a << std::endl;
}