#ifndef CONTACT_H
# define CONTACT_H

# include <iomanip>
# include <iostream>
# include <string>

class Contact
{
    public:
        void FillContact(void);
        void Display(int i);
        void PrintContact(void);
    
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
};

#endif
