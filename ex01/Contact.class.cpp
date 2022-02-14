#include <iostream>
#include <sstream>
#include "Contact.class.hpp"

Contact::Contact( void ) {
    //std::cout << "create Contact" << std::endl;
	return ;
}

Contact::~Contact( void ) {
	//std::cout << "delete contact" << std::endl;
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

int		Contact::setFirstname( std::string s) {
	if (s.compare("\n") == -1)
		return (0);
	this->_firstname = s;
	return (1);
}
int			Contact::setLastname( std::string s) {
	if (s.compare("\n") == -1)
	return (0);
	this->_lastname = s;
	return (1);
}
int			Contact::setNickname( std::string s) {
	if (s.compare("\n") == -1)
		return (0);
	this->_nickname = s;
	return (1);
}
int			Contact::setPhone_number( std::string n ) {
	unsigned int	nb;
	
	if (n.compare("\n") == -1)
		return (0);
	std::istringstream( n ) >> nb;
	if (nb > 0)
	{
		this->_phone_number = nb;
		return (1);
	}
	std::cout << n << " is not a number" << std::endl;
	return (0);
}
int			Contact::setDarkest_secret( std::string s) {
	if (s.compare("\n") == -1)
		return (0);
	this->_darkest_secret = s;
	return (1);
}

void		Contact::print_contact( void ) {
	std::cout	<< "First name : " << this->getFirstname() << std::endl;
	std::cout	<< "Last name : " << this->getLastname() << std::endl;
	std::cout	<< "Nickname : " << this->getNickname() << std::endl;
	std::cout	<< "Phone number : " << this->getPhone_number() << std::endl;
	std::cout	<< "Darkest secret : " << this->getDarkest_secret() << std::endl;
}