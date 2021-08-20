#include "Fixed.hpp"

Fixed::Fixed(const int num)
{
	this->_value = num << this->_point;
}

Fixed::Fixed(const float num)
{
	this->_value = (int)roundf(num * (1 << this->_point));
}

Fixed::Fixed(void) : _value(0)
{

}

Fixed::~Fixed(void)
{

}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}

Fixed::Fixed(const Fixed &num)
{
	this->setRawBits(num.getRawBits());
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	this->setRawBits(rhs.getRawBits());
	return (*this);
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	Fixed	sum;

	sum.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (sum);
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	Fixed	diff;

	diff.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (diff);
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	Fixed	product;

	product.setRawBits((this->getRawBits() * rhs.getRawBits()) >> this->_point);
	return (product);
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	if (rhs.getRawBits() == 0)
	{
		std::cout << "exception: division by zero" << std::endl;
		return (Fixed(0));
	}
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (copy);
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (rhs < lhs)
		return (rhs);
	return (lhs);
}

Fixed	Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	if (rhs < lhs)
		return (rhs);
	return (lhs);
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (rhs > lhs)
		return (rhs);
	return (lhs);
}

Fixed	Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	if (rhs > lhs)
		return (rhs);
	return (lhs);
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_point);
}

float	Fixed::toFloat(void) const
{
	return (this->_value / (float)(1 << this->_point));
}

std::string	Fixed::toString(void) const
{
	std::ostringstream	oss;

	oss << this->toFloat();
	return (oss.str());
}

std::ostream	&operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}