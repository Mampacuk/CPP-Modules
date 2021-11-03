/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:13:12 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/01 17:45:11 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	public:
		class	Line
		{
			public:
				Line(void);
				~Line(void);
				Line(const Line &copy);
				Line(const Fixed &slope, const Fixed &offset);
				Line	&operator=(const Line &rhs);
				// returns 1 if the point is above, 0 if on the line, -1 if below
				int		relativePosition(const Point &point)	const;
				void	setCoefficients(const Point &x, const Point &y);
			private:
				Fixed	_coefficient_x;
				Fixed	_coefficient_y;
				Fixed	_offset;
		};
		Point(void);
		~Point(void);
		Point(const Point &copy);
		Point(const Fixed &x, const Fixed &y);
		Point		&operator=(const Point &);
		bool		operator==(const Point &rhs)	const;
		const Fixed	&get_x(void)					const;
		const Fixed &get_y(void)					const;
	private:
		const Fixed	x;
		const Fixed	y;
};

#endif
