#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon(const std::string &type);
	~Weapon();

	void setType(const std::string &value);
	const std::string getType() const;
};

#endif