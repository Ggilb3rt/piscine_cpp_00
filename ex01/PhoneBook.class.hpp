#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "Contact.class.hpp"

# define PRINT_WIDTH 10 
# define PHONE_BOOK_MAX 8

class PhoneBook {
	private:
		unsigned int	_current;
		unsigned int	_current_max;
		Contact			_list[PHONE_BOOK_MAX];

	public:
		PhoneBook( void );
		~PhoneBook( void );

		void    add( void );
		void	search( void ) const;
};

#endif