#pragma once

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	unsigned int hit_point;
	unsigned int energy_point;
	unsigned int attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	virtual ~ClapTrap();

	ClapTrap &operator=(const ClapTrap &other);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};