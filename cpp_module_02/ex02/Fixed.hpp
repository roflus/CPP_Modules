#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    private:
        int fixedPointNumber;
        static const int fractionalBits = 8;

    public:
        Fixed(void);
        Fixed(const int number);
        Fixed(const float numberf);
        Fixed(const Fixed &old_obj);
        Fixed &operator = (const Fixed &old_obj);
        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

        bool    operator == (const Fixed &fixed) const;
        bool    operator != (const Fixed &fixed) const;
        bool    operator <  (const Fixed &fixed) const;
        bool    operator >  (const Fixed &fixed) const;
        bool    operator <= (const Fixed &fixed) const;
        bool    operator >= (const Fixed &fixed) const;

        Fixed   operator + (const Fixed &fixed) const;
        Fixed   operator - (const Fixed &fixed) const;
        Fixed   operator * (const Fixed &fixed) const;
        Fixed   operator / (const Fixed &fixed) const;

        Fixed&  operator++();
        Fixed&  operator--();
        Fixed   operator++(int);
        Fixed   operator--(int);

        static Fixed& min(Fixed &first, Fixed &second);
        static const Fixed& min(const Fixed &first, const Fixed &second);

        static Fixed& max(Fixed &first, Fixed &second);
        static const Fixed& max(const Fixed &first, const Fixed &second);
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif
