#include "Contact.hpp"
#include "PhoneBook.hpp"



int main(void)
{
	PhoneBook		myPhoneBook;
	std::string		cmd;

	std::cout << "Welcome to The Phonebook!" << std::endl;
	while (cmd.compare("EXIT"))
	{
		std::cout << "Enter command!\nADD, SEARCH or EXIT!" << std::endl;
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD"))
			myPhoneBook.add_contact();
		if (!cmd.compare("SEARCH"))
			myPhoneBook.search();
	}
}
