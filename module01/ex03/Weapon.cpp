#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}
Weapon::~Weapon() {}

void Weapon::setType(const std::string &value)
{
	this->type = value;
}

const std::string Weapon::getType() const
{
	return this->type;
}