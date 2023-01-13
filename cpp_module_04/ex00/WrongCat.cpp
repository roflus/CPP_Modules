#include "WrongCat.hpp"

WCat::WCat() : WAnimal::WAnimal(){
    std::cout << "WCat default constructor called" << std::endl;
    this->type = "Wrong Cat";
}

WCat::WCat(const WCat &old_obj) : WAnimal::WAnimal (old_obj){
    std::cout << "WCat copy constructor called" << std::endl;
    *this = old_obj;
}

WCat &WCat::operator=(const WCat &old_obj){
    this->type = old_obj.type;
    return *this;
}

WCat::~WCat(){
    std::cout << "WCat deconstructor called" << std::endl;
}

void    WCat::makeSound(void) const{
    std::cout << "quack... quack.." << std::endl;
}