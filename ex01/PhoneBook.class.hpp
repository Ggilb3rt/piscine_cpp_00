#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# define PRINT_WIDTH 10 
# define PHONE_BOOK_MAX 8

class PhoneBook {
	private:
		int			_current;
		int			_max;
		Contact		_list[PHONE_BOOK_MAX];

	public:
		PhoneBook( void );
		~PhoneBook( void );

		void    add( void );
		void	search( void );
};

#endif