#include <phonebook.hpp>
#include <iostream>
#include <utils.hpp>
#include <iomanip>

Phonebook::Phonebook() {
    this->_counter = 0;
}

Phonebook::~Phonebook() {

}

void    Phonebook::SetContact(Contact contact, int index) {
    this->_contacts[index] = contact;
}

void    Phonebook::PrintContact(int index) {
    this->_contacts[index].PrintContact();
}

void    Phonebook::PrintContacts() {
    for (int i = 0; i < 8; i++)
    {
        std::cout <<
            std::setw(10) << i << "|" <<
            std::setw(10) << phonebook_truncate(this->_contacts[i].GetFirstName()) << "|" <<
            std::setw(10) << phonebook_truncate(this->_contacts[i].GetLastName()) << "|" <<
            std::setw(10) << phonebook_truncate(this->_contacts[i].GetNickName()) << std::endl;
    }
}

void    Phonebook::GaddContact() {
    Contact     contact;
    std::string tmp;

    std::cout << "fill in first name : " << std::endl;
    getline(std::cin, tmp);
    contact.SetFirstName(tmp);
    std::cout << "fill in last name : " << std::endl;
    getline(std::cin, tmp);
    contact.SetLastName(tmp);
    std::cout << "fill in nickame : " << std::endl;
    getline(std::cin, tmp);
    contact.SetNickName(tmp);
    std::cout << "fill in phone nbr : " << std::endl;
    getline(std::cin, tmp);
    contact.SetPhoneNumber(tmp);
    std::cout << "fill in darkest secret : " <<std::endl;
    getline(std::cin, tmp);
    contact.SetDarkestSecret(tmp);
    if (contact.GetDarkestSecret().length() == 0 || contact.GetFirstName().length() == 0 ||
        contact.GetLastName().length() == 0 || contact.GetNickName().length() == 0 || contact.GetPhoneNumber().length() == 0)
            return ;
    
    this->SetContact(contact, this->_counter);

    this->_counter++;
    this->_counter = this->_counter % 8;
}

void    phoneloop() {
    Phonebook   book;
    std::string user_input;

    while (true)
    {
        std::cout << "prompt : ";
        getline(std::cin, user_input);
        if (std::cin.eof())
            break ;
        if (user_input == "ADD") {
            book.GaddContact();
        }
        else if (user_input == "SEARCH") {
            book.PrintContacts();
            getline(std::cin, user_input);
            if (std::cin.eof())
                break ;
            if (user_input.length() != 1 || user_input[0] > '7' || user_input[0] < '0')
                std::cout << "False input, nbr between 0 and 7 required!" << std::endl;
            else
                book.PrintContact(user_input[0] - '0');
        }
        else if (user_input == "EXIT") {
            break ;
        }
        else
            std::cout << "False input, ADD, SEARCH and EXIT are alowed!" << std::endl;
    }
}
