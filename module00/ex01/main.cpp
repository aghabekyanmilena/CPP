#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string command;
	std::cout << "My Awesome PhoneBook!\n";
	while (true) {
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.eof())
		    break;
		if (command == "ADD")
			phonebook.addcontact();
		else if (command == "SEARCH")
			phonebook.searchcontact();
		else if (command == "EXIT")
			break;
		else if (!command.empty())
			std::cout << "Unknown command. Please use ADD, SEARCH, or EXIT.\n";
	}
	return 0;
}
