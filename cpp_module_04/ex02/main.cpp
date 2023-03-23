#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    // Creating an instance of an abstract class is not possible
    // const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << std::endl;
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

    delete dog;//should not create a leak
    delete cat;


    // Test to show Deep copy
    // {
    //     Dog doggo;
    //     for (int i = 0; i < 4; i++){
    //         std::cout << doggo.getBrain()->getIdeas(i) << std::endl;
    //     }
        
    //     Dog copy = Dog(doggo);
    //     copy.getBrain()->setIdea("A new Idea!", 2);
    //     std::cout << std::endl << "This is the copy!" << std::endl;
    //     for (int i = 0; i < 4; i++){
    //         std::cout << copy.getBrain()->getIdeas(i) << std::endl;
    //     }
    //     std::cout << std::endl << "This is the original!" << std::endl;
    //     for (int i = 0; i < 4; i++){
    //         std::cout << doggo.getBrain()->getIdeas(i) << std::endl;
    //     }
    // }
    // system("leaks Poly01");
    return EXIT_SUCCESS;
}