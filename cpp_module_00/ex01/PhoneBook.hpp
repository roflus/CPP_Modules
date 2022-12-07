#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
    public:
        PhoneBook();
        // ~PhoneBook();

        void AddContact(void);
        // void SearchContacts();
    private:
        int ContactIndex;
        // int contactmount;
        // int maxamount;
        Contact contact[8];
};

#endif
