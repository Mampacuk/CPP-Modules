/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:03:53 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 17:03:54 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <exception>

class	Fixed
{
	public:
		Fixed(const int num);
		Fixed(const float num);
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &num);
		Fixed				&operator=(const Fixed &rhs);
		bool				operator>(const Fixed &rhs)		const;
		bool				operator<(const Fixed &rhs)		const;
		bool				operator>=(const Fixed &rhs)	const;
		bool				operator<=(const Fixed &rhs)	const;
		bool				operator==(const Fixed &rhs)	const;
		bool				operator!=(const Fixed &rhs)	const;
		Fixed				operator+(const Fixed &rhs)		const;
		Fixed				operator-(const Fixed &rhs)		const;
		Fixed				operator*(const Fixed &rhs)		const;
		Fixed				operator/(const Fixed &rhs)		const;
		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);
		int					getRawBits(void)				const;
		float				toFloat(void)					const;
		int					toInt(void)						const;
		static Fixed		&min(Fixed &lhs, Fixed &rhs);
		static const Fixed	&min(const Fixed &lhs, const Fixed &rhs);
		static Fixed		&max(Fixed &lhs, Fixed &rhs);
		static const Fixed	&max(const Fixed &lhs, const Fixed &rhs);
		void				setRawBits(const int raw);
	private:
		int					_value;
		const static int	_point = 8;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &f);

#endif