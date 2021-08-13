#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <sstream>

class	Fixed
{
	public:
		Fixed(const int num);
		Fixed(const float num);
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &num);
		Fixed			&operator=(const Fixed &rhs);
		bool			operator>(const Fixed &rhs)		const;
		bool			operator<(const Fixed &rhs)		const;
		bool			operator>=(const Fixed &rhs)	const;
		bool			operator<=(const Fixed &rhs)	const;
		bool			operator==(const Fixed &rhs)	const;
		bool			operator!=(const Fixed &rhs)	const;
		Fixed			operator+(const Fixed &rhs)		const;
		Fixed			operator-(const Fixed &rhs)		const;
		Fixed			operator*(const Fixed &rhs)		const;
		Fixed			operator/(const Fixed &rhs)		const;
		Fixed			&operator++(void);
		Fixed			operator++(int);
		int				getRawBits(void)				const;
		float			toFloat(void)					const;
		int				toInt(void)						const;
		std::string		toString(void)					const;
		static Fixed	&min(Fixed &lhs, Fixed &rhs);
		static Fixed	min(const Fixed &lhs, const Fixed &rhs);
		static Fixed	&max(Fixed &lhs, Fixed &rhs);
		static Fixed	max(const Fixed &lhs, const Fixed &rhs);
		void			setRawBits(const int raw);
	private:
		int					_value;
		const static int	_point = 8;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &f);

#endif