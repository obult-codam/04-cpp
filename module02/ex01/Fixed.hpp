#include <iostream>

class Fixed {
    private:
        int                 _value;
        static const int    _bits = 8;
    public:
            Fixed();
            Fixed( const int val);
            Fixed( const float val );
            Fixed (const Fixed &);
            ~Fixed();
            Fixed & operator = (const Fixed &);
            int getRawBits( void ) const;
            void setRawBits( int const raw );
            float toFloat( void ) const;
            int toInt( void ) const;
};
            std::ostream& operator<<(std::ostream & os, const Fixed& fx);
