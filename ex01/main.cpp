#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"



int main(void)
{
	std::string		buff;
	PhoneBook		repertoire;

	std::cout << "[sing]Suuuper repertoooiiireee deux miiiiilee[/sing]" << std::endl;
	std::cout << "Usage : ADD or SEARCH or EXIT" << std::endl;
	std::getline(std::cin, buff);
	while (buff.compare("EXIT") != 0)
	{
		if (buff == "ADD")
			repertoire.add();
		else if (buff == "SEARCH")
			repertoire.search();
		else
		{
			std::cout <<  std::endl << "Invalid cmd." << std::endl;
		}
		std::getline(std::cin, buff);
	}
	return (0);
}
