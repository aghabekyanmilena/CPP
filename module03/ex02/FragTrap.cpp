#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DefFrag")
{
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;

	std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->name = other.name;
	this->attack_damage = other.attack_damage;
	this->energy_point = other.energy_point;
	this->hit_point = other.hit_point;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap" << name << "high five! ✋😄" << std::endl;
}