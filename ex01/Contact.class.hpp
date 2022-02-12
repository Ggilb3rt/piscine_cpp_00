#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		int  		_phone_number;
		std::string	_darkest_secret;


	public:

		Contact(std::string firstname,
				std::string lastname,
				std::string nickname,
				int  phone_number,
				std::string darkest_secret);
		~Contact( void );

		std::string	getFirstname( void ) const;
		std::string	getLastname( void ) const;
		std::string	getNickname( void ) const;
		int			getPhone_number( void ) const;
		std::string	getDarkest_secret( void ) const;
		void		setFirstname( std::string s);
		void		setLastname( std::string s);
		void		setNickname( std::string s);
		int			setPhone_number( std::string n);
		void		setDarkest_secret( std::string s);
};

#endif