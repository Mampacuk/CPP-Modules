/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:19:49 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 21:36:31 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int	main(void)
{
	Point	a(Fixed(1), Fixed(1));
	Point	b(Fixed(1), Fixed(5));
	Point	c(Fixed(5), Fixed(3));

	Point	p1(Fixed(2), Fixed(4));
	Point	p2(Fixed(1), Fixed(1));
	Point	p3(Fixed(0), Fixed(1));

	std::cout << bsp(a, b, c, p1) << std::endl;
	std::cout << bsp(a, b, c, p2) << std::endl;
	std::cout << bsp(a, b, c, p3) << std::endl;
}