#include "Serializer.hpp"

Serializer::Serializer(void) {
    std::cout << "Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &old_obj) {
    std::cout << "Copy constructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &old_obj) {
    return *this;
    std::cout << "Copy assignment operator called" << std::endl;
}

Serializer::~Serializer(void) {
    std::cout << "Deconstructor called" << std::endl;
}

uintptr_t    Serializer::serialize(Data* ptr) {
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}

Data         *Serializer::deserialize(uintptr_t raw) {
    Data *ptr = reinterpret_cast<Data*>(raw);
    return ptr;
}