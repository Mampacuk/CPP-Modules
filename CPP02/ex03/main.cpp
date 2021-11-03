/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:19:49 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/01 18:23:47 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cstdlib>
#include <ctime>

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int	main(void)
{
	// Point	a(Fixed(1), Fixed(1));
	// Point	b(Fixed(1), Fixed(5));
	// Point	c(Fixed(5), Fixed(3));

	// Point	p1(Fixed(2), Fixed(4));
	// Point	p2(Fixed(1), Fixed(1));
	// Point	p3(Fixed(0), Fixed(1));
	// Point	p4(Fixed(1), Fixed(3));
	// Point	p5(Fixed(3), Fixed(3));

	// std::cout << bsp(a, b, c, p1) << std::endl;
	// std::cout << bsp(a, b, c, p2) << std::endl;
	// std::cout << bsp(a, b, c, p3) << std::endl;
	// std::cout << bsp(a, b, c, p4) << std::endl;
	// std::cout << bsp(a, b, c, p5) << std::endl;

	srand(time(0));
	
	Point	left(Fixed(0), Fixed(static_cast<float>(2.5)));
	Point	top(Fixed(static_cast<float>(2.5)), Fixed(5));
	Point	right(Fixed(5), Fixed(static_cast<float>(2.5)));
	Point	bottom(Fixed(static_cast<float>(2.5)), Fixed(0));
	
	//		   y^	(2.5, 5) top
	//		   5.______*______.
	// 			|			  |
	// 	left	|			  | right
	// 	(0, 2.5)*			  *(5, 2.5)
	// 			|			  |
	// ---------.______*______.-->x
	//			0	(2.5, 0)  5
	//				bottom
	for (int i = 1; i <= 10; i++)
	{
		int	all_points = 100 * i;
		int	points_inside = 0;
		for (int j = 0; j < 100 * i; j++)
		{
			Point	random_point(Fixed(static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 5.0))),
							Fixed(static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 5.0))));
			if (bsp(left, top, bottom, random_point) || bsp(right, top, bottom, random_point))
				points_inside++;
		}
		std::cout << "Generated " << 100 * i << " points. " << points_inside << " of them were inside either of the two triangles, "
			"comprising " << (static_cast<float>(static_cast<float>(points_inside) / static_cast<float>(all_points)) * 100) << "% of the figure." << std::endl;
	}
}