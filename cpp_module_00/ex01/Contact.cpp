#include "Contact.hpp"

void    Contact::PrintContact(void){
    std::cout << "Contact info: " << std::endl;
    std::cout << '\t' << "Firstname: " + FirstName << std::endl;
    std::cout << '\t' << "Lastname: " + LastName << std::endl;
    std::cout << '\t' << "Nickname: " + NickName << std::endl;
    std::cout << '\t' << "City: " + PhoneNumber << std::endl;
    std::cout << '\t' << "Country: " + DarkestSecret << std::endl;
}

static bool    CheckIfEmpty(std::string string){
    if (string.empty()){
        std::cout << "Contact fields cannot be empty" << std::endl;
        return (true);
    }
    return (false);
}

void    Contact::FillContact(void){
    std::cout << "Fill in Firstname: ";
    std::getline(std::cin, FirstName);
    while (CheckIfEmpty(FirstName) == true){
        std::cout << "Fill in Firstname: ";
        std::getline(std::cin, FirstName);
    }
    std::cout << "Fill in Lastname: ";
    std::getline(std::cin, LastName);
    while (CheckIfEmpty(LastName) == true){
        std::cout << "Fill in LastName: ";
        std::getline(std::cin, LastName);
    }
    std::cout << "Fill in Nickname: ";
    std::getline(std::cin, NickName);
    while (CheckIfEmpty(NickName) == true){
        std::cout << "Fill in Nickname: ";
        std::getline(std::cin, NickName);
    }
    std::cout << "Fill in PhoneNumber: ";;
    std::getline(std::cin, PhoneNumber);
    while (CheckIfEmpty(PhoneNumber) == true){
        std::cout << "Fill in PhoneNumber: ";
        std::getline(std::cin, PhoneNumber);
    }
    std::cout << "Fill in DarkestSecret: ";
    std::getline(std::cin, DarkestSecret);
    while (CheckIfEmpty(DarkestSecret) == true){
        std::cout << "Fill in DarkestSecret: ";
        std::getline(std::cin, DarkestSecret);
    }
    std::cout << std::endl;
    PrintContact();
}

static std::string  Truncate(std::string string){
    if (string.length() > 10){
        return (string.substr(0, 8) + ".");
    }
    return(string);
}

void    Contact::Display(int i){
    std::cout << std::setw(10) << i + 1 << "|";
    std::cout << std::setw(10) << Truncate(FirstName) << "|"; 
    std::cout << std::setw(10) << Truncate(LastName) << "|";
    std::cout << std::setw(10) << Truncate(NickName) << "|" << std::endl;
}