#pragma once

#include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	virtual ~FragTrap();

	void highFivesGuys(void);
};