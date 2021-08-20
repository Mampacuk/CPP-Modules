#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	this->_name = copy._name;
	this->_title = copy._title;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

std::string	Sorcerer::get_name(void) const
{
	return (this->_name);
}

std::string	Sorcerer::get_title(void) const
{
	return (this->_title);
}

void	Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

Sorcerer	&Sorcerer::operator=(Sorcerer &rhs)
{
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Sorcerer &s)
{
	o << "I am " << s.get_name() << ", " << s.get_title() << ", and I like ponies!" << std::endl;
	return (o);
}