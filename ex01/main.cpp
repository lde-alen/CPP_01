#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	size;

	size = 20;
	Zombie *horde = zombieHorde(size, "Walker");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
}
