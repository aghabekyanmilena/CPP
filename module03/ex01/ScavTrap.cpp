#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("DefaultScav")
{
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->name = other.name;
	this->hit_point = other.hit_point;
	this->energy_point = other.energy_point;
	this->attack_damage = other.attack_damage;

	return *this;
}

void ScavTrap::attack(const std::string &target)
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
	std::cout << "ScavTrap " << name << " attacks " << target
				<< " causing " << attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "Guard gate mode" << std::endl;
}