#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
    
    private:
        void DisplayBook(void);
        void RemoveOldest(void);
        int ContactIndex;
        Contact contact[8];

    public:
        PhoneBook();
        ~PhoneBook();
        void AddContact(void);
        void SearchContacts(void);
};

#endif
