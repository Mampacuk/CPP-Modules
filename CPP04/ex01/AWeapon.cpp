#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{

}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name),
												_damage(damage), _apcost(apcost)
{

}

AWeapon::AWeapon(const AWeapon &copy) : _name(copy._name), _damage(copy._damage),
										_apcost(copy._apcost)
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