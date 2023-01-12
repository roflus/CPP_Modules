#include "WrongCat.hpp"

WCat::WCat() : WAnimal::WAnimal(){
    std::cout << "WCat default constructor called" << std::endl;
}

WCat::WCat(const WCat &old_obj) : WAnimal::WAnimal (old_obj){
    std::cout << "WCat copy constructor called" << std::endl;
    *this = old_obj;
}

WCat::~WCat(){
    std::cout << "WCat deconstructor called" << std::endl;
}
