#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{

}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name),
												_apcost(apcost), _damage(damage)
{

}

AWeapon::AWeapon(const AWeapon &copy) : _name(copy._name), _apcost(copy._apcost),
										_damage(copy._damage)
{

}

AWeapon::~AWeapon(void)
{

}

AWeapon	&AWeapon::operator=(const AWeapon &rhs)
{
	this->_apcost = rhs._apcost;
	this->_name = rhs._name;
	this->_damage = rhs._damage;
	return (*this);
}

std::string	AWeapon::getName(void) const
{
	return (this->_name);
}

int	AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int	AWeapon::getDamage(void) const
{
	return (this->_damage);
}