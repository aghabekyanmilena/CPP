#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	name = "";
	ClapTrap::name = "_clap_name";

	hit_point = 100;
	energy_point = 50;
	attack_damage = 30;
	std::cout << "DiamondTrap default constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";

	hit_point = 100;
	energy_point = 50;
	attack_damage = 30;
	std::cout << "DiamondTrap parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	*this = other;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::name = other.ClapTrap::name;
		name = other.name;

		hit_point = other.hit_point;
		energy_point = other.energy_point;
		attack_damage = other.attack_damage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAMI()
{
	std::cout << "I am " << name
			<< "and my ClapTrap name is " << ClapTrap::name
			<< std::endl;
}