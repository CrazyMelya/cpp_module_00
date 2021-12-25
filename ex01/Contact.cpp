#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::set_information()
{
	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, this->firstName);
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, this->lastName);
	std::cout << "Enter nickname" << std::endl;
	std::getline(std::cin, this->nickname);
	std::cout << "Enter number" << std::endl;
	std::getline(std::cin, this->number);
	std::cout << "Enter The Dearkest Secret!" << std::endl;
	std::getline(std::cin, this->secret);
}

void	Contact::show_information()
{
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Number: " << this->number << std::endl;
	std::cout << "The Darkest Secret: " << this->secret << std::endl;
}

std::string	Contact::get_first_name()
{
	return (this->firstName);
}

std::string Contact::get_last_name()
{
	return (this->lastName);
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

std::string Contact::get_number()
{
	return (this->number);
}
