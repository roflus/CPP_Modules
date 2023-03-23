#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"

int main(void)
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << std::endl;

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << std::endl;

    animal->makeSound();
    dog->makeSound();
    cat->makeSound(); //will output the cat sound!
    std::cout << std::endl;
    

    delete animal;
    delete dog;
    delete cat;
    std::cout << std::endl << std::endl;

    const WAnimal* wanimal = new WAnimal();
    const WAnimal* wcat = new WCat();
    std::cout << std::endl;

    std::cout << wanimal->getType() << " " << std::endl;
    std::cout << wcat->getType() << " " << std::endl;
    std::cout << std::endl;

    wanimal->makeSound();
    wcat->makeSound();

    std::cout << std::endl;
    delete wanimal;
    delete wcat;
 
    // extra tests
    // Cat cat;
    // Animal *animal = &cat;
    // std::cout << std::endl;

    // animal->makeSound();
    // cat.makeSound();
    // std::cout << std::endl;

    // WCat wcat;
    // WAnimal *wanimal = &wcat;
    // std::cout << std::endl;

    // wanimal->makeSound();
    // wcat.makeSound();

    return EXIT_SUCCESS;
}