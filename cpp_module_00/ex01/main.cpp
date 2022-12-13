#include "PhoneBook.hpp"

void    intro(void){
    std::cout << std::endl << "Welkom to the PhoneBook!" << std::endl;
    std::cout << "This Phonebook has the following options:" << std::endl;
    std::cout << "\tADD: Add contact to phonebook." << std::endl;
    std::cout << "\tSEARCH: Search trough phonebook." << std::endl;
    std::cout << "\tEXIT: Exit phonebook." << std::endl;
    std::cout << std::endl;
}

int main(void)
{

    PhoneBook   phonebook;
    std::string command;
    bool        input = true;

    intro();
    while (input == true)
    {
        std::cout << "Enter a command: ADD, SEARCH or EXIT." << std::endl << "Input: ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.AddContact();
        else if (command == "SEARCH"){
            std::cout << "SEARCH";
            // searchcontact
        }
        else if (command == "EXIT"){
            std::cout << "Exiting PhoneBook." << std::endl;
            input = false;
        }
        else{
            std::cout << "Please enter a valid command." << std::endl;
        }
    }
    return (EXIT_SUCCESS);
}
