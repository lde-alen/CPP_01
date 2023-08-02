#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z = newZombie("Nino");
	z->announce();
	randomChump("Myvh");
	delete z;
}
