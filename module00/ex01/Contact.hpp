#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
private:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
	// int index;
public:
	// setter to set the data
	void	setfirstname(const std::string &value);
	void	setlastname(const std::string &value);
	void	setnickname(const std::string &value);
	void	setphonenumber(const std::string &value);
	void	setdarkestsecret(const std::string &value);

	// getters
	std::string getfirstname() const;
	std::string getlastname() const;
	std::string getnickname() const;
	std::string getphonenumber() const;
	std::string getdarkestsecret() const;
};

#endif