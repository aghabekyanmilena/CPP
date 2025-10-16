#include "Contact.hpp"

// setters
void	Contact::setfirstname(const std::string &value)
{
	firstname = value;
}

void	Contact::setlastname(const std::string &value)
{
	lastname = value;
}

void	Contact::setnickname(const std::string &value)
{
	nickname = value;
}

void	Contact::setphonenumber(const std::string &value)
{
	phonenumber = value;
}

void	Contact::setdarkestsecret(const std::string &value)
{
	darkestsecret = value;
}

// getters
std::string Contact::getfirstname() const {
	return firstname;
}

std::string Contact::getlastname() const {
	return lastname;
}

std::string Contact::getnickname() const {
	return nickname;
}

std::string Contact::getphonenumber() const {
	return phonenumber;
}

std::string Contact::getdarkestsecret() const {
	return darkestsecret;
}