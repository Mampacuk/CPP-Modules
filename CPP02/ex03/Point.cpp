/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:13:08 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 21:42:48 by aisraely         ###   ########.fr       */
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

Point::Line::Line(const Line &copy) : _slope(copy._slope), _offset(copy._offset) {}

Point::Line	&Point::Line::operator=(const Line &rhs)
{
	this->_offset = rhs._offset;
	this->_slope = rhs._slope;
	return (*this);
}

int	Point::Line::relativePosition(const Point &point) const
{
	if (point.get_y() > this->_slope * point.get_x() + this->_offset)
		return (1);
	else if (point.get_y() < this->_slope * point.get_x() + this->_offset)
		return (-1);
	return (0);
}

void	Point::Line::calculateSlope(const Point &x, const Point &y)
{
	Fixed	x1 = x.get_x();
	Fixed	y1 = x.get_y();
	Fixed	x2 = y.get_x();
	Fixed	y2 = y.get_y();

	this->_slope = (y2 - y1) / (x2 - x1);
}

void	Point::Line::calculateOffset(const Point &x, const Point &y)
{
	Fixed	x1 = x.get_x();
	Fixed	y1 = x.get_y();
	Fixed	x2 = y.get_x();
	Fixed	y2 = y.get_y();

	this->_offset = (x2 * y1 - x1 * y2) / (x2 - x1);
}
