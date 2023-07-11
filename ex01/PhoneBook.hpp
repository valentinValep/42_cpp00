#pragma once

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook {
	private:
		Contact	_contacts[MAX_CONTACTS];
		int		_contactCount;
		int		_contactIndex;
	public:
		PhoneBook();
		void	addContact();
		void	searchContact();
};
