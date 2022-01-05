#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->amount = 0;
	this->current = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact()
{
	this->contacts[this->current].set_information();
	if (amount < 8)
		amount++;
	current++;
	if (current == 8)
		current = 0;
}

void	PhoneBook::show()
{
	std::cout << "|     Index|First name| Last name|  Nickname|    Number|" << std::endl;
	for (unsigned int i = 0; i < this->amount; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1<< "|";
		if (this->contacts[i].get_first_name().length() > 9)
			std::cout << this->contacts[i].get_first_name().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].get_first_name() << "|";
		if (this->contacts[i].get_last_name().length() > 9)
			std::cout << this->contacts[i].get_last_name().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
		if (this->contacts[i].get_nickname().length() > 9)
			std::cout << this->contacts[i].get_nickname().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].get_nickname() << "|";
		if (this->contacts[i].get_number().length() > 9)
			std::cout << this->contacts[i].get_number().substr(0, 9) << ".|" << std::endl;
		else
			std::cout << std::setw(10) << this->contacts[i].get_number() << "|" << std::endl;
	}
}

void	PhoneBook::show_contact(unsigned int index)
{
	this->contacts[index].show_information();
}

void	PhoneBook::search()
{
	unsigned int	index;

	if (this->amount == 0)
		std::cout << "Phonebook is empty!" << std::endl;
	else
	{
		this->show();
		while (true)
		{
			std::cout << "Enter an index of searching contact or 0 to exit" << std::endl;
			if ((std::cin >> index) && (index == 0 || index - 1 < this->amount))
			{
				if (index - 1 < this->amount)
				{
					this->show_contact(index - 1);
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					break ;
				}
				else
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					break ;
				}
			}
			else
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid index!" << std::endl;
			}
		}
	}
}
