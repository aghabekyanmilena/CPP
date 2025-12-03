#include "ClapTrap.hpp"

int main()
{
	ClapTrap a = ClapTrap("Bob");

	a.attack("BobyCHI");
	a.takeDamage(100);
	a.beRepaired(10);
	return 0;
}
