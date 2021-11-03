/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:13:08 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/01 17:46:18 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(Fixed(0)), y(Fixed(0)) {}

Point::~Point(void) {}

Point::Point(const Point &copy) : x(copy.x), y(copy.y) {}

Point::Point(const Fixed &x, const Fixed &y) : x(Fixed(x)), y(Fixed(y)) {}

Point	&Point::operator=(const Point &)
{
	return (*this);
}

bool	Point::operator==(const Point &rhs) const
{
	return (this->x == rhs.x && this->y == rhs.y);
}

const Fixed	&Point::get_x(void) const
{
	return (this->x);
}

const Fixed	&Point::get_y(void) const
{
	return (this->y);
}

Point::Line::Line(void) {}

Point::Line::~Line(void) {}

Point::Line::Line(const Line &copy) : _coefficient_x(copy._coefficient_x), _coefficient_y(copy._coefficient_y), _offset(copy._offset) {}

Point::Line	&Point::Line::operator=(const Line &rhs)
{
	this->_coefficient_x = rhs._coefficient_x;
	this->_coefficient_y = rhs._coefficient_y;
	this->_offset = rhs._offset;
	return (*this);
}

int	Point::Line::relativePosition(const Point &point) const
{
	if (this->_coefficient_x * point.get_x() + this->_coefficient_y * point.get_y() + this->_offset > Fixed(0))
		return (1);
	else if (this->_coefficient_x * point.get_x() + this->_coefficient_y * point.get_y() + this->_offset < Fixed(0))
		return (-1);
	return (0);
}

void	Point::Line::setCoefficients(const Point &x, const Point &y)
{
	Fixed	x1 = x.get_x();
	Fixed	y1 = x.get_y();
	Fixed	x2 = y.get_x();
	Fixed	y2 = y.get_y();

	this->_coefficient_x = y1 - y2;
	this->_coefficient_y = x2 - x1;
	this->_offset = (x1 * y2) - (x2 * y1);
}
