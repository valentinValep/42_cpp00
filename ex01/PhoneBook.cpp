#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->_contactCount = 0;
	this->_contactIndex = -1;
}

void	PhoneBook::addContact(void)
{
	this->_contactIndex = (this->_contactIndex + 1) % MAX_CONTACTS;
	if (this->_contacts[this->_contactIndex].fillContact() == false)
		this->_contactIndex--;
	else
		this->_contactCount += this->_contactCount < MAX_CONTACTS;
}

std::string	short_str(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

static void	print_contacts(Contact contacts[MAX_CONTACTS], int contactCount)
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	if (contactCount == 0)
		return ;
	for (int i = 0; i < contactCount; i++) {
		std::cout << "|";
		std::cout.width(10);
		std::cout << i + 1;
		std::cout << "|";
		std::cout.width(10);
		std::cout << short_str(contacts[i].getFirstName());
		std::cout << "|";
		std::cout.width(10);
		std::cout << short_str(contacts[i].getLastName());
		std::cout << "|";
		std::cout.width(10);
		std::cout << short_str(contacts[i].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

void	PhoneBook::searchContact(void)
{
	std::string	input;
	int			index;

	print_contacts(this->_contacts, this->_contactCount);
	std::cout << "Enter index: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	index = std::atoi(input.c_str()) - 1;
	if (index < 0 || index > this->_contactCount - 1)
		std::cout << "Invalid index" << std::endl;
	else
	{
		std::cout << "First name: " << this->_contacts[index].getFirstName() << std::endl;
		std::cout << "Last name: " << this->_contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_contacts[index].getNickname() << std::endl;
		std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
	}
}
