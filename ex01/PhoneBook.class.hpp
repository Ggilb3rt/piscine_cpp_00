#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook {

	public:
		int const   max_contact;
		int			current;
		Contact     list[max_contact];

		PhoneBook( void );
		~PhoneBook( void );

		void    add(Contact new_user);
};

#endif