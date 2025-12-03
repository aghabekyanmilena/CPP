#include "ScavTrap.hpp"

int main()
{

	std::cout << "\n--- ClapTrap ---\n";
	ClapTrap c("Clap Happy");

	std::cout << "\n--- ScavTrap ---\n";
	ScavTrap s("Scav Happy");

	std::cout << "\n--- attacks ---\n";
	c.attack("enemy");
	s.attack("enemy");

	std::cout << "\n--- guardGate ---\n";
	s.guardGate();

	std::cout << "\n--- destructiors called ---\n";
	return 0;
}


