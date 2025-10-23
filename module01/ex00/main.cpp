#include "Zombie.hpp"

int main()
{
	Zombie* heapZombie = newZombie("Heap");
	heapZombie->announce();

	randomChump("Stack");

	delete heapZombie;
	return 0;
}