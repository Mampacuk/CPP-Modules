#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : n(n)
{
	this->zombies = new Zombie[n];
	for (size_t i = 0; i < n; i++)
	{
		this->zombies[i].set_name(this->_namepool[rand() % 8]);
		this->zombies[i].set_type(this->_typepool[rand() % 8]);
		this->zombies[i].announce();
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->zombies;
}

std::string	ZombieHorde::_namepool[8] = {"Nick", "Rochelle", "Coach", "Ellis", "Louis", "Bill", "Francis", "Zoey"};

std::string	ZombieHorde::_typepool[8] = {"Hunter", "Smoker", "Boomer", "Jockey", "Spitter", "Charger", "Witch", "Tank"};