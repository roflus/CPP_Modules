#ifndef FIXED_H
#define FIXED_H

class Fixed
{
    private:
        int number;
        static const int x = 8;
    public:
        Fixed(void);
        Fixed(const Fixed &old_obj);
        Fixed &operator = (const Fixed &old_obj);
        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};




#endif