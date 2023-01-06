#ifndef FIXED_H
#define FIXED_H

#include "iostream"

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
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif
