#include <iostream>
#include <string>
#include <cstdlib>
#include "Converter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "just one argument accepted" << std::endl;
        return (1);
    }

    Converter data(argv[1]);

    std::cout << "char: " << data.getCharRep() << std::endl;
    std::cout << "int: " << data.getIntRep() << std::endl;
    std::cout << "float: " << data.getFloatRep() << std::endl;
    std::cout << "double: " << data.getDoubleRep() << std::endl;

    return 0;
}