#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) : Enemy (copy)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

void	RadScorpion::takeDamage(int amount)
{
	if (this->getHP() >= 0 && amount >= 0)
	{
		this->setHP(this->getHP() - (amount - 3));
		std::cout << "* TCHSSSSSS... * (HP now: " << this->getHP() << ")" << std::endl;
	}
}