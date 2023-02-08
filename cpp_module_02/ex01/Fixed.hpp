#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{
    private:
        int _fixedPointNumber;
        static const int _fractionalBits = 8;

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
