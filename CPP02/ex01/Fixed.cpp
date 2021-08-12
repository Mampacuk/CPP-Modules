/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:24:18 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:24:19 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = num << this->_point;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)roundf(num * (1 << this->_point));
}

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(num.getRawBits());
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return (*this);
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_point);
}

float	Fixed::toFloat(void) const
{
	return (this->_value / (float)(1 << this->_point));
}

std::ostream	&operator<<(std::ostream &o, const Fixed &f)
{
	std::cout << f.toFloat();
	return (o);
}