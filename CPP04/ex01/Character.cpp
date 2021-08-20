#include "Character.hpp"

Character::Character(void) : _ap(40), _weapon(NULL), _name("(unnamed)")
{

}

Character::Character(const Character &copy)
{
	this->_ap = copy._ap;
	this->_name = copy._name;
	this->_weapon = copy._weapon;
}

Character::Character(const std::string &name) : _ap(40), _weapon(NULL), _name(name)
{

}

Character &Character::operator=(const Character &rhs)
{
	this->_ap = rhs._ap;
	this->_name = rhs._name;
	this->_weapon = rhs._weapon;
	return (*this);
}

void	Character::recoverAP(void)
{
	if (this->_ap <= 30)
		this->_ap += 10;
}

void	Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (this->_ap >= this->_weapon->getAPCost())
	{
		this->_ap -= this->_weapon->getAPCost();
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

std::string	Character::getName(void) const
{
	return (this->_name);
}

int	Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon	*Character::getWeapon(void) const
{
	return (this->_weapon);
}

std::ostream	&operator<<(std::ostream &o, const Character &c)
{
	if (c.getWeapon())
		o << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
	else
		o << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
	return (o);
}