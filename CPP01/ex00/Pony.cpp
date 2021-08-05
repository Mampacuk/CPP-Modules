#include "Pony.hpp"

Pony::Pony(std::string _name, int _age) : _name(_name), _age(_age)
{
	std::cout << "A beautiful " << this->_age << " years old pony named " << _name << " was born!" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Poor " << this->_name << " died :(" << std::endl;
}
