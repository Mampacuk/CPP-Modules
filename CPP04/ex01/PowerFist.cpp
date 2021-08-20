#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(const PowerFist &copy) : AWeapon(copy)
{

}

PowerFist::~PowerFist(void)
{

}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}