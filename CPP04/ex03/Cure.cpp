#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{

}

Cure::Cure(const Cure &copy) : AMateria(copy)
{

}

Cure::~Cure(void)
{
	
}

Cure	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	this->_xp += 10;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}