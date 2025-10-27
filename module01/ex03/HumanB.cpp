#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name) {}
HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack() const
{
	if (this->weapon)
		std::cout<<this->name<<" attacks with "<<this->weapon->getType()<<std::endl;
	else
		std::cout<<this->name<<" has no weapon to attack with "<<std::endl;
}