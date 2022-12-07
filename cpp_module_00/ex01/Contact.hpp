#ifndef CONTACT_H
# define CONTACT_H

# include <iomanip>
# include <iostream>

class Contact
{
    public:
        void FillContact(void);
        void Display(void);
    
    private:
        void PrintContact(void);
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string City;
        std::string Country;
};

#endif
