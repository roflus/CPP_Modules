#include "Contact.hpp"

void    Contact::PrintContact(void){
    std::cout << "Contact info: " << std::endl;
    std::cout << '\t' << "Firstname: " + FirstName << std::endl;
    std::cout << '\t' << "Lastname: " + LastName << std::endl;
    std::cout << '\t' << "Nickname: " + NickName << std::endl;
    std::cout << '\t' << "City: " + PhoneNumber << std::endl;
    std::cout << '\t' << "Country: " + DarkestSecret << std::endl;
}

void    Contact::FillContact(void){
    std::cout << "Fill in Firstname: ";
    std::getline(std::cin, FirstName);
    std::cout << "Fill in Lastname: ";
    std::getline(std::cin, LastName);
    std::cout << "Fill in Nickname: ";
    std::getline(std::cin, NickName);
    std::cout << "Fill in City: ";;
    std::getline(std::cin, PhoneNumber);
    std::cout << "Fill in Country: ";
    std::getline(std::cin, DarkestSecret);
    std::cout << std::endl;
    PrintContact();
}

static std::string  Truncate(std::string string){
    if (string.length() > 10){
        return (string.substr(0, 8) + ".");
    }
    return(string);
}

void    Contact::Display(void){
    std::cout << std::setw(10) << Truncate(FirstName) + "|"; 
    std::cout << std::setw(10) << Truncate(LastName) + "|";
    std::cout << std::setw(10) << Truncate(NickName) << std::endl;
}