#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contactCount = 0;
	oldindex = 0;
}

std::string PhoneBook::shorten(const std::string &str) const
{
	if(str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::displayContact(int index) const {
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << shorten(contacts[index].getfirstname()) << "|";
	std::cout << std::setw(10) << shorten(contacts[index].getlastname()) << "|";
	std::cout << std::setw(10) << shorten(contacts[index].getnickname()) << std::endl;
}

void PhoneBook::addcontact()
{
	Contact newContact;
	std::string input;	
	std::cout << "First name: ";
	std::getline(std::cin, input);
	if (input.empty())
		return;
	newContact.setfirstname(input);	
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	if (input.empty())
		return;
	newContact.setlastname(input);	
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	if (input.empty())
		return;
	newContact.setnickname(input);	
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	if (input.empty())
		return;
	newContact.setphonenumber(input);	
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	if (input.empty()) 
		return;
	newContact.setdarkestsecret(input);	
	contacts[oldindex] = newContact;	
	if (contactCount < 8)
		contactCount++;
	oldindex = (oldindex + 1) % 8;	
	std::cout << "Contact added\n";
}

void PhoneBook::searchcontact()
{
    if (contactCount == 0) {
        std::cout << "PhoneBook is empty.\n";
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < contactCount; i++)
        displayContact(i);
    std::cout << "Enter the index of the contact to display: ";
    std::string input;
    std::getline(std::cin, input);
    if (input.length() != 1 || !isdigit(input[0])) {
        std::cout << "Invalid index input.\n";
        return;
    }
    int index = input[0] - '0';
    if (index < 0 || index >= contactCount) {
        std::cout << "Invalid index.\n";
        return;
    }
    std::cout << "First name: " << contacts[index].getfirstname() << std::endl;
    std::cout << "Last name: " << contacts[index].getlastname() << std::endl;
    std::cout << "Nickname: " << contacts[index].getnickname() << std::endl;
    std::cout << "Phone number: " << contacts[index].getphonenumber() << std::endl;
    std::cout << "Darkest secret: " << contacts[index].getdarkestsecret() << std::endl;
}
