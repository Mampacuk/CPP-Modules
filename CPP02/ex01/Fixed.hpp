/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:03:13 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 17:03:14 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed(const int num);
		Fixed(const float num);
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &num);
		Fixed	&operator=(const Fixed &rhs);
		int		getRawBits(void)	const;
		float	toFloat(void)		const;
		int		toInt(void)			const;
		void	setRawBits(const int raw);

	private:
		int					_value;
		const static int	_point = 8;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &f);

#endif