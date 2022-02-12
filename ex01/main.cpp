#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"



int main(void)
{
	std::string		buff;
	PhoneBook		repertoire();

	std::cout << "[sing]Repertoooiiireee deux miiiiilee[/sing]" << std::endl;
	std::cout << "Usage : ADD or SEARCH or EXIT" << std::endl;
	std::cin >> buff;
	while (buff.compare("EXIT") != 0)
	{
		std::cout << "i'm in" << std::endl;
		if (buff == "ADD")
		{
			std::cout << "weell" << std::endl;

		}
			//repertoire::add();
		else if (buff == "SEARCH")
			std::cout << "pouet" << std::endl;
			//repertoire::search(buff)
		std::cin >> buff;
	}
	return (0);
}

	// class Contact
	// char *firstname
	// char *lastname
	// char *nickname
	// int  phone_number
	// char *darkest_secret

	//class PhoneBook
	// int max_contact = 8
	// int current_nb_contact = 0
	// Contact list[max_contact - 1]

	// Add()
		// create instance of Contact
		// if (current_nb_contact >= max_contact)
			// current_nb_contact == 0
		// put it in list[current_nb_contact]
		// current_nb_contact++

	// Search()
		// print_contacts()
		// std::cout << "Entrez l'index du contact" << std::endl;
		// int ask = std::cin
		// if (is_ok(ask))
			// print_contact(ask)
		// else
			// std::cout << "lol nope" << std::endl;
	// print_contacts()
	//      index|first name|   last na.|  nickname
