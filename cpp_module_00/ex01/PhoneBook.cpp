# include "PhoneBook.hpp"
# include <sstream>

void    PhoneBook::RemoveOldest(void){
    for(int i = 0; i < 7; i++)
        contact[i] = contact[i + 1];
}

void    PhoneBook::AddContact(void) {
    ContactIndex++;
    if (ContactIndex > 8){
        RemoveOldest();
        ContactIndex--;
    }
    contact[ContactIndex -1].FillContact();
}

void    PhoneBook::DisplayBook(void){
    std::cout << std::endl << std::setw(10) << "Index" << "|"; 
    std::cout << std::setw(10) << "Firstname" << "|";
    std::cout << std::setw(10) << "Lastname" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    for(int i = 0; i < ContactIndex; ++i)
        contact[i].Display(i);
    std::cout << std::endl;
}

static bool    check_digit(std::string string){
    unsigned long i = 0;
    while (i < string.length())
    {
        if (!isdigit(string[i]))
            return false;
        i++;
    }
    return true;
}

void    PhoneBook::SearchContacts(void) {
    std::string index;
    bool        index_check = true;
	bool		input_check = true;
    int         idx;

    DisplayBook();
	if (ContactIndex == 0){
		std::cout << "Phonebook is empty, please ADD a contact." << std::endl;
		return ;
	}
	while (index_check == true){
		while (input_check == true){
			std::cout << "Enter index of contact to display: ";
			std::getline(std::cin, index);
			if (check_digit(index) == true){
				std::stringstream temp;
				temp << index;
				temp >> idx;
				input_check = false;
			}
			else
				std::cout << "Please enter a number between 1 and " << ContactIndex << std::endl;
		}
		if (idx < 1 || idx > ContactIndex){
        	std::cout << "Index out of range, choose number between 1 and " << ContactIndex << std::endl;
			input_check = true;
		}
		else{
			contact[idx - 1].PrintContact();
			index_check = false;
		}
	}
}