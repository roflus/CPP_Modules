#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int _fixedPointNumber;
        static const int _FractionalBits = 8;
    public:
        Fixed(void);
        Fixed(const Fixed &old_obj);
        Fixed &operator = (const Fixed &old_obj);
        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};




#endif