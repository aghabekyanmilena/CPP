#include "FragTrap.hpp"

int main()
{
	std::cout << "\n--- FragTrap ---\n";
	FragTrap f("Frag Happy");

	f.attack("a target");
	f.highFivesGuys();

	std::cout << "\n--- Copy & assignment ---\n";
	FragTrap copy(f);
	FragTrap assigned;
	assigned = f;

	std::cout << "\n--- Destructors ---\n";
	return 0;
}