/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:33:23 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 22:33:23 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>

Base	*generate(void)
{
	return ((rand() % 2 ? new A : (rand() % 2 ? static_cast<Base*>(new B) : new C)));
}
