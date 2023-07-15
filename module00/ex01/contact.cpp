#include <contact.hpp>
#include <iostream>
#include <iomanip>

Contact::Contact() {

}

Contact::~Contact() {
	
}

std::string Contact::GetFirstName(void) {
	return (this->_first_name);
}
std::string Contact::GetLastName(void) {
	return (this->_last_name);
}

std::string Contact::GetNickName(void) {
	return (this->_nickname);
}

std::string Contact::GetPhoneNumber(void) {
	return (this->_phone_number);
}

std::string Contact::GetDarkestSecret(void) {
	return (this->_darkest_secret);
}

void Contact::SetFirstName(std::string firstname) {
	this->_first_name = firstname;
}

void Contact::SetLastName(std::string lastname) {
	this->_last_name = lastname;
}

void Contact::SetNickName(std::string nickname) {
	this->_nickname = nickname;
}

void Contact::SetPhoneNumber(std::string phonenumber) {
	this->_phone_number = phonenumber;
}

void Contact::SetDarkestSecret(std::string darkestsecret) {
	this->_darkest_secret = darkestsecret;
}

void	Contact::PrintContact() {
	std::cout << std::left <<
		std::setw(16)<< "first name:" << this->_first_name << std::endl <<
		std::setw(16)<< "last name:" << this->_last_name << std::endl <<
		std::setw(16)<< "nickname:" << this->_nickname << std::endl <<
		std::setw(16)<< "phone number:" << this->_phone_number << std::endl <<
		std::setw(16)<< "darkest secret:" << this->_darkest_secret << std::endl << std::right;
}

// void	Contact::ViewContact(Contact contact) {
// 	std::cout << contact._first_name << std::endl;
// 	std::cout << contact;
// }