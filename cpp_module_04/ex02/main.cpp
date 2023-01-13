#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{

    // const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;
    // Animal **animalArray = new Animal*[4];
    Animal *animalArray[4];
    for (int i = 0; i != 2; ++i){
        animalArray[i] = new Dog();
        std::cout << std::endl;
    }
    for (int i = 2; i != 4; ++ i){
        animalArray[i] = new Cat();
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i != 4; ++i){
        delete animalArray[i];
        std::cout << std::endl;
    }
    // delete[] animalArray;

    delete j;//should not create a leak
    delete i;

    return EXIT_SUCCESS;
}