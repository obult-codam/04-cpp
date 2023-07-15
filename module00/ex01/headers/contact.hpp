#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class   Contact {
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
        Contact();
        ~Contact();
        std::string GetFirstName(void);
        std::string GetLastName(void);
        std::string GetNickName(void);
        std::string GetPhoneNumber(void);
        std::string GetDarkestSecret(void);
        void    SetFirstName(std::string firstname);
        void    SetLastName(std::string lastname);
        void    SetNickName(std::string nickname);
        void    SetPhoneNumber(std::string phonenumber);
        void    SetDarkestSecret(std::string darkestsecret);
        void	PrintContact();
};

#endif