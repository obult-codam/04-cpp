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

            static Fixed& min(Fixed& f1, Fixed& f2);
            static const Fixed& min(const Fixed& f1, const Fixed& f2);
            static Fixed& max(Fixed& f1, Fixed& f2);
            static const Fixed& max(const Fixed& f1, const Fixed& f2);

            bool operator> (const Fixed& f) const;
            bool operator< (const Fixed& f) const;
            bool operator>= (const Fixed& f) const;
            bool operator<= (const Fixed& f) const;
            bool operator== (const Fixed& f) const;
            bool operator!= (const Fixed& f) const;
            Fixed operator+ (const Fixed& f) ;
            Fixed operator- (const Fixed& f) ;
            Fixed operator* (const Fixed& f) ;
            Fixed operator/ (const Fixed& f) ;
            Fixed operator++ ();
            Fixed operator-- ();
            Fixed operator++ (int);
            Fixed operator-- (int);
};

std::ostream& operator<<(std::ostream & os, const Fixed& fx);
