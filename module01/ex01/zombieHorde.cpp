#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie* horde = new Zombie[N];
	for(int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}

// this function takes 2 arguments and returns a pointer to Zombie
//Zombie* means a variable that stores memory address of a Zombie object