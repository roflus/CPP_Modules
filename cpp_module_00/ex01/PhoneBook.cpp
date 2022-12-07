# include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    ContactIndex = 0;
}


void    PhoneBook::AddContact(void) {
    ContactIndex++;
    /*
        if (ContactIndex > 8){
            Delete oldest contact;
        }
    */
    contact[ContactIndex].FillContact();
}

void    SearchContacts(void) {



}