#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name)
{
	std::cout<<name<<" was created"<<std::endl;
}
HumanB::~HumanB()
{
	std::cout<<name<<" was destroyed"<<std::endl;
}

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