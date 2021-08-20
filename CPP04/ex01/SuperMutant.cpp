#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy(copy)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int amount)
{
	if (this->getHP() >= 0 && amount >= 0)
	{
		this->setHP(this->getHP() - (amount - 3));
		std::cout << "ME HURTS!!!!! (HP now: " << this->getHP() << ")" << std::endl;
	}
}