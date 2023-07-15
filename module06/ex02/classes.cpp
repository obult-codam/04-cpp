#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <ctime>

Base * generate(void)
{
    srand((int)time(0));
    switch(rand() % 3) {
        case 0:
            return new A();
        case 1:
            return new B();
        default:
            return new C();
}
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "say AAAA" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "say BBBB" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "say CCCC" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "say AAAA" << std::endl;
    }
    catch (...) {}
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "say BBBB" << std::endl;
    }
    catch (...) {}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "say CCCC" << std::endl;
    }
    catch (...) {}
}

int main(void)
{
    Base    *test = generate();
    identify(test);
    identify(*test);
    return(0);
}
