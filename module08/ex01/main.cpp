#include <iostream>
#include <cstdlib>
#include <limits.h>
#include <time.h>

#include "Span.hpp"

int main()
{
    {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    // sp.addNumber(11);    // exception thrown
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << std::endl;

    {
        unsigned int sp_size = 10042;

        Span sp = Span(sp_size);

        for (unsigned int i = 0; i < sp_size; i++)
            sp.addNumber(rand());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    // std::cout << std::endl;

    // {
    //     unsigned int sp_size = 2147483;  // takes long

    //     Span sp = Span(sp_size);

    //     for (unsigned int i = 0; i < sp_size; i++)
    //         sp.addNumber(rand());

    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << sp.longestSpan() << std::endl;
    // }

    std::cout << std::endl;

    {
        unsigned int sp_size = 242;
        srand (time(NULL));

        Span sp = Span(sp_size);

        for (unsigned int i = 0; i < sp_size; i++)
            sp.addNumber(rand());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "For Alex" << std::endl;
    std::cout << std::endl;

    {
    Span sp = Span(2);
    sp.addNumber(INT_MAX);
    sp.addNumber(-1);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }

    return 0;
}
