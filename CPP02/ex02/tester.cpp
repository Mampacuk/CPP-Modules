/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:03:01 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 17:04:29 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a(23.41f);
	Fixed	a1(23.4f);
	Fixed	a2(23.41f);
	Fixed	a3(23.00f);
	Fixed	a4(23);
	Fixed	a5(0);
	Fixed	a6(-1);
	Fixed	a7(46.82f);

	// >
	std::cout << "Test00: \">\"" << std::endl;
	std::cout << a << " > " << a1 << "? " << (a > a1) << std::endl;
	std::cout << a << " > " << a2 << "? " << (a > a2) << std::endl;
	std::cout << a3 << " > " << a4 << "? " << (a3 > a4) << std::endl;
	std::cout << a6 << " > " << a5 << "? " << (a6 > a5) << std::endl << std::endl;
	
	// <
	std::cout << "Test01: \"<\"" << std::endl;
	std::cout << a << " < " << a1 << "? " << (a < a1) << std::endl;
	std::cout << a << " < " << a2 << "? " << (a < a2) << std::endl;
	std::cout << a3 << " < " << a4 << "? " << (a3 < a4) << std::endl;
	std::cout << a6 << " < " << a5 << "? " << (a6 < a5) << std::endl << std::endl;

	// >=
	std::cout << "Test02: \">=\"" << std::endl;
	std::cout << a << " >= " << a1 << "? " << (a >= a1) << std::endl;
	std::cout << a << " >= " << a2 << "? " << (a >= a2) << std::endl;
	std::cout << a3 << " >= " << a4 << "? " << (a3 >= a4) << std::endl;
	std::cout << a6 << " >= " << a5 << "? " << (a6 >= a5) << std::endl << std::endl;

	// <=
	std::cout << "Test03: \"<=\"" << std::endl;
	std::cout << a << " <= " << a1 << "? " << (a <= a1) << std::endl;
	std::cout << a << " <= " << a2 << "? " << (a <= a2) << std::endl;
	std::cout << a3 << " <= " << a4 << "? " << (a3 <= a4) << std::endl;
	std::cout << a6 << " <= " << a5 << "? " << (a6 <= a5) << std::endl << std::endl;

	// ==
	std::cout << "Test04: \"==\"" << std::endl;
	std::cout << a << " == " << a1 << "? " << (a == a1) << std::endl;
	std::cout << a << " == " << a2 << "? " << (a == a2) << std::endl;
	std::cout << a3 << " == " << a4 << "? " << (a3 == a4) << std::endl;
	std::cout << a6 << " == " << a5 << "? " << (a6 == a5) << std::endl << std::endl;

	// !=
	std::cout << "Test05: \"!=\"" << std::endl;
	std::cout << a << " != " << a1 << "? " << (a != a1) << std::endl;
	std::cout << a << " != " << a2 << "? " << (a != a2) << std::endl;
	std::cout << a3 << " != " << a4 << "? " << (a3 != a4) << std::endl;
	std::cout << a6 << " != " << a5 << "? " << (a6 != a5) << std::endl << std::endl;

	// +
	std::cout << "Test06: \"+\"" << std::endl;
	std::cout << a << " + " << a1 << " = " << (a + a1) << std::endl;
	std::cout << a6 << " + " << a2 << " = " << (a6 + a2) << std::endl;
	std::cout << a6 << " + " << a5 << " = " << (a6 + a5) << std::endl << std::endl;

	// -
	std::cout << "Test07: \"-\"" << std::endl;
	std::cout << a << " - " << a1 << " = " << (a - a1) << std::endl;
	std::cout << a6 << " - " << a2 << " = " << (a6 - a2) << std::endl;
	std::cout << a5 << " - " << a6 << " = " << (a5 - a6) << std::endl << std::endl;

	// *
	std::cout << "Test08: \"*\"" << std::endl;
	std::cout << a << " * " << a1 << " = " << (a * a1) << std::endl;
	std::cout << a6 << " * " << a2 << " = " << (a6 * a2) << std::endl;
	std::cout << a5 << " * " << a6 << " = " << (a5 * a6) << std::endl << std::endl;

	// /
	std::cout << "Test09: \"/\"" << std::endl;
	std::cout << a7 << " / " << a << " = " << (a7 / a) << std::endl;
	std::cout << a2 << " / " << a6 << " = " << (a2 / a6) << std::endl;
	std::cout << a5 << " / " << a6 << " = " << (a5 / a6) << std::endl << std::endl;
	std::cout << a7 / a5 << std::endl;
}