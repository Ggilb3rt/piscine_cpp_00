#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) : _current( 0 ), _max ( 0 ) {
    return ;
}

PhoneBook::~PhoneBook( void ) {
    return ;
}

void    PhoneBook::add( void ) {
    std::string infos;

    if (this->_current >= 8)
    {
        this->_current = 0;
        std::cout << "Max contact reach, older contact will be rewrite." << std::endl;
    }
    std::cout << "First name : ";
    std::getline(std::cin, infos);
    while ((this->_list[this->_current].setFirstname(infos)) == 0)
    {
        std::cout << "First name : ";
        std::getline(std::cin, infos);
    }

    std::cout << "Last name : ";
    std::getline(std::cin, infos);
    while ((this->_list[this->_current].setLastname(infos)) == 0)
    {
        std::cout << "Last name : ";
        std::getline(std::cin, infos);
    }

    std::cout << "Nickname : ";
    std::getline(std::cin, infos);
    while ((this->_list[this->_current].setNickname(infos)) == 0)
    {
        std::cout << "Nickname : ";
        std::getline(std::cin, infos);    
    }

    std::cout << "Phone number : ";
    std::getline(std::cin, infos);
    while ((this->_list[this->_current].setPhone_number(infos)) == 0)
    {
        std::cout << "Phone number : ";
        std::getline(std::cin, infos);
    }

    std::cout << "Darkest secret : ";
    std::getline(std::cin, infos);
    while ((this->_list[this->_current].setDarkest_secret(infos)) == 0)
    {
        std::cout << "Darkest secret : ";
        std::getline(std::cin, infos);
    }
    std::cout << std::endl << "Contact add in phone book (index " << this->_current << ")" << std::endl;
    this->_current++;
    if (this->_max < PHONE_BOOK_MAX - 1)
        this->_max++;
}

void    Display(std::string s)
{
    if (s.length() > PRINT_WIDTH)
        std::cout << s.substr(0, 9) << ".|";
    else
        std::cout << std::setw(PRINT_WIDTH) << s << "|";
}

void    PhoneBook::search( void ) {
    int         i = 0;
    std::string choose;


    if (this->_max > 0)
    {
        Display("Index");
        Display("First Name pouet");
        Display("Last Name");
        Display("Nickname");
        std::cout << std::endl;
        while (i < this->_max)
        {
            std::ostringstream index;
            index << i;
            Display(index.str());
            Display(this->_list[i].getFirstname());
            Display(this->_list[i].getLastname());
            Display(this->_list[i].getNickname());
            std::cout << std::endl;
            i++;
        }
        std::cout << "Select index : ";
        std::getline(std::cin, choose);
        if ((std::istringstream( choose ) >> i) != 0)
        {
            if (i < this->_max)
                this->_list[i].print_contact();
            else
                std::cout << "Index invalid." << std::endl;
        }
        else
            std::cout << "Need number between 0 and " << this->_max - 1 << std::endl;
    }
    else
        std::cout << std::endl << "Phone book is empty." << std::endl;
}
