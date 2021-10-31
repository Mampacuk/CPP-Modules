/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:03:17 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 17:03:18 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &num);
		Fixed	&operator=(const Fixed &rhs);
		int		getRawBits(void)	const;
		void	setRawBits(const int raw);
	private:
		int					_value;
		const static int	_point = 8;
};

#endif