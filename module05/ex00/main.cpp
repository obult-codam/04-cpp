#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat crat("crat", 41);

    crat.decrement();

    std::cout << crat << std::endl;

    std::cout << std::endl;

    try
    {
        Bureaucrat krat("krat", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat krat("mats", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat krat("vlat", 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat krat("blat", 150);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
