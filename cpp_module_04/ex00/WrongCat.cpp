#include "WrongCat.hpp"

WCat::WCat() : WAnimal(){
    std::cout << "WCat default constructor called" << std::endl;
    this->_type = "Wrong Cat";
}

WCat::WCat(const WCat &old_obj) : WAnimal (old_obj){
    std::cout << "WCat copy constructor called" << std::endl;
    *this = old_obj;
}

WCat &WCat::operator=(const WCat &old_obj){
    std::cout << "WCat copy assignment operator called" << std::endl;
    this->_type = old_obj._type;
    return *this;
}

WCat::~WCat(){
    std::cout << "WCat deconstructor called" << std::endl;
}

void    WCat::makeSound(void) const{
    std::cout << "Wrong cat sound" << std::endl;
}