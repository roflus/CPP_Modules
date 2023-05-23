#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <sstream>
#include <limits>
#include <math.h>

enum    types{
    INT,
    CHAR,
    DOUBLE,
    FLOAT,
    ERROR,
};

class ScalarConverter{
    private:
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &old_obj);
        ScalarConverter &operator=(const ScalarConverter &old_obj);
        ~ScalarConverter(void);

        static std::string  _input;
        static int          _type;


        static int  getType(void);

        static void printchar(void);
        static void printint(void);
        static void printdouble(void);
        static void printfloat(void);

        static void castchar(void);
        static void castint(void);
        static void castdouble(void);
        static void castfloat(void);

        static int          _int;
        static char         _char;
        static float        _float;
        static double       _double;

        static double       _tempdouble;
        static bool         _imp;


    public:
        static void convert(std::string string);
 
};

#endif