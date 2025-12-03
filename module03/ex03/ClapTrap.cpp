#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "";
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << "Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->name = other.name;
	this->hit_point = other.hit_point;
	this->energy_point = other.energy_point;
	this->attack_damage = other.attack_damage;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->hit_point = other.hit_point;
	this->energy_point = other.energy_point;
	this->attack_damage = other.attack_damage;

	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hit_point == 0) {
		std::cout << "No hit points" << std::endl;
		return ;
	}

	if (this->energy_point == 0) {
		std::cout << "No energy points" << std::endl;
		return ;
	}

	this->energy_point--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amout)
{
	if (this->hit_point == 0) {
		std::cout << "No hit points" << std::endl;
		return ;
	}

	if (this->energy_point == 0) {
		std::cout << "No energy points" << std::endl;
		return ;
	}

	this->energy_point--;
	this->hit_point += amout;
	std::cout << this->name << " repaired" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_point == 0) {
		std::cout << "No hit points" << std::endl;
		return ;
	}

	if (amount >= (unsigned int)this->hit_point)
		this->hit_point = 0;
	else
		this->hit_point -= amount;

	std::cout << this->name << " took " << amount << " damage" << std::endl;
}