/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:13:15 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 19:31:52 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	Point::Line	side;
	
	side.calculateSlope(a, b);
	side.calculateOffset(a, b);
	if (side.relativePosition(c) != side.relativePosition(point))
		return (false);
	
	side.calculateSlope(b, c);
	side.calculateOffset(b, c);
	if (side.relativePosition(a) != side.relativePosition(point))
		return (false);
	
	side.calculateSlope(c, a);
	side.calculateOffset(c, a);
	if (side.relativePosition(b) != side.relativePosition(point))
		return (false);
	return (true);
}
