#include "Human.hpp"

std::string	Human::identify(void) const
{
	return (_brain.identify());
}

const Brain	&Human::getBrain(void) const
{
	const Brain	&brain = this->_brain;

	return (brain);
}