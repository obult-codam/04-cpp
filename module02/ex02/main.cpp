#include <Fixed.hpp>
#include <iostream>
int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    Fixed c(50);
    std::cout << c << std::endl;
    std::cout << c / 2 << std::endl;
    std::cout << c * 2 << std::endl;
    std::cout << c + 5 << std::endl;
    c = c + 5;
    std::cout << c + 5 << std::endl;
    c = c - 10.5f;
    std::cout << c / 2 << std::endl;
    return 0;
}