/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:13:15 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/01 17:42:29 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	Point::Line	side;

	if (a == b || b == c || c == a || a == point || b == point || c == point)
		return (false);
	side.setCoefficients(a, b);
	if (!side.relativePosition(point) || side.relativePosition(c) != side.relativePosition(point))
		return (false);
	side.setCoefficients(b, c);
	if (!side.relativePosition(point) || side.relativePosition(a) != side.relativePosition(point))
		return (false);
	side.setCoefficients(c, a);
	if (!side.relativePosition(point) || side.relativePosition(b) != side.relativePosition(point))
		return (false);
	return (true);
}
