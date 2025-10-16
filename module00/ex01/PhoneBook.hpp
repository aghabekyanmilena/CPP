#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int contactCount;
	int oldindex;

	void displayContact(int index) const;
	std::string shorten(const std::string &str) const;
public:
	PhoneBook();

	void addcontact();
	void searchcontact();
};

#endif