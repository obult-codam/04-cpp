#include <Fixed.hpp>
#include <string>
#include <cmath>

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed( const int val )
{
    // std::cout << "Int initializer constructor called" << std::endl;
    _value = val << _bits;
}

Fixed::Fixed( const float val )
{
    // std::cout << "Float initializer constructor called" << std::endl;
    _value = roundf(val * (1 << _bits));
}

Fixed::Fixed(const Fixed& ref)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
    // std::cout << "Copy asignment operator called" << std::endl;
    _value = ref.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void    Fixed::setRawBits( int const raw )
{
    // std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

float   Fixed::toFloat( void ) const
{
    return ((float)_value / (1 << _bits));
}

int     Fixed::toInt( void ) const
{
    return _value >> _bits;
}

bool    Fixed::operator<(const Fixed& f) const
{
    return (_value < f._value);
}

bool    Fixed::operator>(const Fixed& f) const
{
    return (_value > f._value);
}

bool    Fixed::operator>=(const Fixed& f) const
{
    return (_value >= f._value);
}

bool    Fixed::operator<=(const Fixed& f) const
{
    return (_value <= f._value);
}

bool    Fixed::operator==(const Fixed& f) const
{
    return (_value == f._value);
}

bool    Fixed::operator!=(const Fixed& f) const
{
    return (_value != f._value);
}

Fixed   Fixed::operator+ (const Fixed& f)
{
    return (toFloat() + f.toFloat());
}

Fixed   Fixed::operator- (const Fixed& f)
{
    return (toFloat() - f.toFloat());
}

Fixed    Fixed::operator* (const Fixed& f)
{
    return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed    Fixed::operator/ (const Fixed& f)
{
    return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed   Fixed::operator++ ()
{
    ++_value;
    return *this;
}

Fixed   Fixed::operator++ (int)
{
    Fixed   tmp(*this);
    ++*this;
    return tmp;
}

Fixed   Fixed::operator-- ()
{
    --_value;
    return *this;
}

Fixed   Fixed::operator-- (int)
{
    Fixed   tmp(*this);
    --*this;
    return tmp;
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

std::ostream& operator<<(std::ostream & os, const Fixed& fx)
{
    os << fx.toFloat();
    return os;
}
