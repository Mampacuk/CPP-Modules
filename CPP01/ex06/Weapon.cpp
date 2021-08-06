#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string _type) : _type(_type)
{

}

const std::string	&Weapon::getType(void) const
{
	const std::string	&type = this->_type;

	return (type);
}

void	Weapon::setType(std::string _type)
{
	this->_type = _type;
}