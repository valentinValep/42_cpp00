#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	return ;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

static bool	verifyInput(std::string input)
{
	if (std::cin.eof())
		exit(0);
	if (input.empty())
	{
		std::cout << "Invalid input" << std::endl;
		return (false);
	}
	return (true);
}

bool	Contact::fillContact(void)
{
	Contact	contact;

	std::cout << "Enter first name: ";
	std::getline(std::cin, contact._firstName);
	if (!verifyInput(contact._firstName))
		return false;
	std::cout << "Enter last name: ";
	std::getline(std::cin, contact._lastName);
	if (!verifyInput(contact._lastName))
		return false;
	std::cout << "Enter nickname: ";
	std::getline(std::cin, contact._nickname);
	if (!verifyInput(contact._nickname))
		return false;
	std::cout << "Enter phone number: ";
	std::getline(std::cin, contact._phoneNumber);
	if (!verifyInput(contact._phoneNumber))
		return false;
	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, contact._darkestSecret);
	if (!verifyInput(contact._darkestSecret))
		return false;
	*this = contact;
	return (true);
}
