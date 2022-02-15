
#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {
	private:
		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		unsigned int	_phone_number;
		std::string		_darkest_secret;


	public:

		Contact( void );
		~Contact( void );

		std::string	getFirstname( void ) const;
		std::string	getLastname( void ) const;
		std::string	getNickname( void ) const;
		int			getPhone_number( void ) const;
		std::string	getDarkest_secret( void ) const;
		int			setFirstname( std::string s);
		int			setLastname( std::string s);
		int			setNickname( std::string s);
		int			setPhone_number( std::string n);
		int			setDarkest_secret( std::string s);
		void		print_contact( void ) const;
};

#endif