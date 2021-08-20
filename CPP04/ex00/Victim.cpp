#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	this->_name = copy._name;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string	Victim::get_name(void) const
{
	return (this->_name);
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

Victim	&Victim::operator=(Victim &rhs)
{
	this->_name = rhs._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Victim &v)
{
	o << "I'm " << v.get_name() << " and I like otters!" << std::endl;
	return (o);
}