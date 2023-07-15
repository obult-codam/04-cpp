#include <iostream>
#include "iter.hpp"

void    plusOne(char& q)
{
    q += 1;
}

int main(void)
{
    char    test[] = "000011110000";
    std::cout << test << std::endl;

    ::iter(test, 12, ::plusOne);
    ::iter(test, 12, plusOne);

    std::cout << test << std::endl;

    double    dtest[] = {41.33};
    std::cout << *dtest << std::endl;

    ::iter(dtest, 1, ::plusOne);

    std::cout << *dtest << std::endl;
}