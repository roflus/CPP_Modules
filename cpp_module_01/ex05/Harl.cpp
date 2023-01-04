#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::complain(std::string level){
    
    // array met strings
    std::string levels[] = {
        "Debug",
        "Info",
        "Warning",
        "Error"
    };
    // ponter function met alle funties
    
    void  (Harl::*complaints[])() ={
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    // loop om langs alle levels te gaan
    int i = 0;
    while (i < 4){
        void (Harl::*theComplaint)() = complaints[i];
        if (level == levels[i]){
            (this->*theComplaint)();
            return ;
        }
        i++;
    }
    std::cout << "No complaints" << std::endl;
}

void    Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void    Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! \
    If you did, I wouldn’t be asking for more!" << std::endl;
}
void    Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
    years whereas you started working here since last month." << std::endl;
}
void   Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}