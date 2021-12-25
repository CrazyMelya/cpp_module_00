#include <iostream>
#include <string>
#include <iomanip>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	number;
		std::string	secret;
	public:
		Contact();
		~Contact();
		void	set_information();
		void	show_information();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string	get_number();
};

#endif
