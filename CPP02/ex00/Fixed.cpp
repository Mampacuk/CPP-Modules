#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}

Fixed::Fixed(const Fixed &num)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(num.getRawBits());
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return (*this);
}