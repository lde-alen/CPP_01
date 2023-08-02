#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
	this->name = name;
	std::cout << "HumanA " << name << " created with ";
	std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->name << " destroyed" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << \
		this->weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}
