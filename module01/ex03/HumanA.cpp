#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
	: name(name), weapon(weapon)
{
	std::cout<<name<<" was created"<<std::endl;
}

HumanA::~HumanA()
{
	std::cout<<name<<" was destroyed"<<std::endl;
}

void HumanA::attack() const
{
	std::cout<<this->name<<" attacks with "<<this->weapon.getType()<<std::endl;
}