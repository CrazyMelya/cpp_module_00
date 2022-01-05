#include <iomanip>
#include <iostream>
#include <string>
#include "Contact.hpp"
#include <limits>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
	private:
		Contact contacts[8];
		unsigned int	amount;
		unsigned int	current;	
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact();
		void	search();
		void	show();
		void	show_contact(unsigned int index);
};

#endif
