#include "Enemy.hpp"

Enemy::Enemy(void)
{

}

Enemy::Enemy(int hp, std::string const &type) : _type(type), _hp(hp)
{

}

Enemy::Enemy(const Enemy &copy) : _type(copy._type), _hp(copy._hp)
{

}

Enemy::~Enemy(void)
{

}

Enemy	&Enemy::operator=(const Enemy &rhs)
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return (*this);	
}

std::string	Enemy::getType(void) const
{
	return (this->_type);
}

int	Enemy::getHP(void) const
{
	return (this->_hp);
}

void	Enemy::setHP(int hp)
{
	this->_hp = hp;
}

void	Enemy::takeDamage(int amount)
{
	(void)amount;
}