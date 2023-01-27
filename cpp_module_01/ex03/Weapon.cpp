# include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){}

Weapon::~Weapon(){}

std::string const &Weapon::getType(){
    std::string const &ref = this->_type;
    return ref;
}

void Weapon::setType(std::string type){
    this->_type = type;
}
