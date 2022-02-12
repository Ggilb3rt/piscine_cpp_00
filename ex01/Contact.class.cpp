#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(
		std::string firstname,
		std::string lastname,
		std::string nickname,
		int  phone_number,
		std::string darkest_secret) : _firstname(firstname),
		_lastname(lastname),
		_nickname(nickname),
		_phone_number(phone_number),
		_darkest_secret(darkest_secret) {
	return ;
}

Contact::~Contact( void ) {
	return ;
}

// Accessors
std::string    Contact::getFirstname( void ) const {
	return (this->_firstname);
}
std::string	Contact::getLastname( void ) const {
	return (this->_lastname);
}
std::string	Contact::getNickname( void ) const {
    return (this->_nickname);
}
int			Contact::getPhone_number( void ) const {
    return (this->_phone_number);
}
std::string	Contact::getDarkest_secret( void ) const {
	return (this->_darkest_secret);
}

void		Contact::setFirstname( std::string s) {
	this->_firstname = s;
}
void		Contact::setLastname( std::string s) {
	this->_lastname = s;
}
void		Contact::setNickname( std::string s) {
	this->_nickname = s;
}
int			Contact::setPhone_number( std::string n ) {
	int	nb;
	
	sscanf(n.c_str(), "%d", &nb);
	if (nb)
	{
		std::cout << n << " | " << nb << std::endl;
		this->_phone_number = nb;
		return (1);
	}
	std::cout << n << "is not a number" << std::endl;
	return (0);
}
void		Contact::setDarkest_secret( std::string s) {
	this->_darkest_secret = s;
}