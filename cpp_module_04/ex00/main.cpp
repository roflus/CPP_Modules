#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    meta->makeSound();
    j->makeSound();
    i->makeSound(); //will output the cat sound!
    

    delete i;
    delete j;
    delete meta;

    const WAnimal* beest = new WAnimal();
    const WAnimal* dier = new WCat();
    std::cout << beest->getType() << " " << std::endl;
    std::cout << dier->getType() << " " << std::endl;
    beest->makeSound();
    dier->makeSound();

    delete beest;
    delete dier;
 
    return EXIT_SUCCESS;
}