#include "Zombie.hpp"

int main()
{
	int N = 5;
	Zombie* horde = zombieHorde(N, "newZombie");

	for (int i = 0; i < N; i++)
		horde[i].accounce();

	delete[] horde;
	return 0;
}
