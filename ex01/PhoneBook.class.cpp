#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) : max_contact( 8 ), current( 0 ) {
    std::cout << "create PhoneBook" << std::endl;
    return ;
}

PhoneBook::~PhoneBook( void ) {
    std::cout << "destroye PhoneBook" << std::endl;
    return ;
}