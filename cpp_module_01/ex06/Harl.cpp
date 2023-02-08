#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::complain(std::string level){
    
    // array met strings
    std::string levels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    // ponter function met alle funties
    
    typedef void  (Harl::*complaints[])();
    complaints functions = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    // loop om langs alle levels te gaan
    int i;
    for (i = 0; i < 4; i++){
        if (level == levels[i])
            break ;
    }

    switch (i)
    {
    case 0:
        (this->*functions[0])();
    case 1:
        (this->*functions[1])();
    case 2:
        (this->*functions[2])();
    case 3:
        (this->*functions[3])();
        break ;
    default:
        std::cout << "Ja 't zal wel!" << std::endl;
    }
}

void    Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void    Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void    Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
    std::cout << "years whereas you started working here since last month." << std::endl;
}
void   Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}