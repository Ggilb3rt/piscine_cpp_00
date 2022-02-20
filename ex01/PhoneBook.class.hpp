#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

# define PRINT_WIDTH 10 
# define PHONE_BOOK_MAX 8

class PhoneBook {
	private:
		int			_current;
		int			_current_max;
		Contact		_list[PHONE_BOOK_MAX];

	public:
		PhoneBook( void );
		~PhoneBook( void );

		void    add( void );
		void	search( void ) const;
};

#endif