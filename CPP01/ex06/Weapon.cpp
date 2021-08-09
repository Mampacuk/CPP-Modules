#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string _type) : _type(_type)
{

}

const std::string	&Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string _type)
{
	this->_type = _type;
}