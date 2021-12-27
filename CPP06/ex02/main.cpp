/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:41:11 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 22:41:11 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

int	main()
{
	srand(time(0));
	A	a;
	B	b;
	C	c;

	identify(&a);
	identify(&b);
	identify(&c);

	std::cout << std::endl;

	identify(a);
	identify(b);
	identify(c);

	std::cout << std::endl << "Random generated one:" << std::endl;

	Base	*ptr = generate();

	identify(ptr);
}