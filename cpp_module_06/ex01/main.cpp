#include "Serializer.hpp"

int main(int argc, char **argv){
    argv = NULL;
    if (argc != 1)
        return 1;
    Data data;
    data._iets = 9;
    data._string = "negen";
    Data        *ptr = &data;
    uintptr_t   test = 0;

    std::cout << ptr << std::endl;
    test = Serializer::serialize(ptr);
    std::cout << test << std::endl;
    ptr = Serializer::deserialize(test);
    std::cout << ptr << std::endl;

    std::cout << "----" << std::endl;
    ptr = Serializer::deserialize(Serializer::serialize(ptr));
    std::cout << ptr << std::endl;

}