#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <sstream>

class PhoneBook
{
    public:
        PhoneBook();

        void AddContact(void);
        void SearchContacts(void);

    private:
        void DisplayBook(void);
        void RemoveOldest(void);
        int ContactIndex;
        Contact contact[8];
};

#endif
