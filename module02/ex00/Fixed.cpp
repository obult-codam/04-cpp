#include <Fixed.hpp>
#include <string>
#include <iostream>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed(const Fixed& ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
    std::cout << "Copy asignment operator called" << std::endl;
    _value = ref.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void    Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}
