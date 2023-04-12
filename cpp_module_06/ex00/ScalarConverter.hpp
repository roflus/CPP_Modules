#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>

enum    types{
    INT,
    CHAR,
    DOUBLE,
    FLOAT,
    ERROR,
};

class Scalarconverter{
    private:
        static std::string  _input;
        static int          _type;

        static long         _long;
        static int          _int;
        static char         _char;
        static float        _float;
        static double       _double;


    public:
        Scalarconverter(std::string input);
        Scalarconverter(const Scalarconverter &old_obj);
        Scalarconverter &operator=(const Scalarconverter &old_obj);
        ~Scalarconverter(void);

        static void convert(void);
        static int  getType(void);

        static void print(void);
        static void printchar(void);
        static void printint(void);
        static void printdouble(void);
        static void printfloat(void);

        static void castchar(void);
        static void castint(void);
        static void castdouble(void);
        static void castfloat(void);


};

#endif