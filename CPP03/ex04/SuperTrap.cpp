#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	this->_hp = 100;
	this->_maxhp = 100;
	this->_energy = 120;
	this->_maxenergy = 120;
	this->_melee = 60;
	this->_ranged = 20;
	this->_armor = 5;
	std::cout << "[SuperTrap (unnamed)] (being constructed) " << this->_deploying[rand() % 5] << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
	this->_hp = 100;
	this->_maxhp = 100;
	this->_energy = 120;
	this->_maxenergy = 120;
	this->_name = name;
	this->_melee = 60;
	this->_ranged = 20;
	this->_armor = 5;
	std::cout << "[SuperTrap " << this->_name << "] (being constructed) " << this->_deploying[rand() % 5] << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy)
{
	this->_hp = copy._hp;
	this->_maxhp = copy._maxhp;
	this->_energy = copy._energy;
	this->_maxenergy = copy._maxenergy;
	this->_level = copy._level;
	this->_name = copy._name;
	this->_melee = copy._melee;
	this->_ranged = copy._ranged;
	this->_armor = copy._ranged;
	std::cout << "[SuperTrap " << this->_name << "] (being copied) " << this->_deploying[rand() % 5] << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "[SuperTrap " << this->_name << "] (dying) " << this->_death[rand() % 5] << std::endl;
}