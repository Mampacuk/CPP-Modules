/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:36:57 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 22:36:57 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception& e) {}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (const std::exception& e) {}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (const std::exception& e) {}
}