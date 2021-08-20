#include "AMateria.hpp"

AMateria::AMateria(void) : _xp(0)
{
	
}

AMateria::AMateria(const std::string &type) : _xp(0), _type(type)
{

}

AMateria::AMateria(const AMateria &copy) : _xp(copy._xp), _type(copy._type)
{

}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	this->_xp = rhs._xp;
	return (*this);
}

AMateria::~AMateria(void)
{

}

const std::string	&AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int	AMateria::getXP(void) const
{
	return (this->_xp);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}