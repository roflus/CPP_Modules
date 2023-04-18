#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"

class Serializer{
    private:
        Serializer(void);
        Serializer(const Serializer &old_obj);
        Serializer &operator=(const Serializer &old_obj);
        ~Serializer(void);
    public:
        static uintptr_t    serialize(Data* ptr);
        static Data         *deserialize(uintptr_t raw);     
};

#endif