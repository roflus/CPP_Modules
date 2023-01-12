#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    const WAnimal* dier = new WCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << dier->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    dier->makeSound();
    meta->makeSound();
    
    return EXIT_SUCCESS;
}