/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:24:36 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:24:37 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony	*ponyOnTheHeap(void)
{
	Pony	*heappony;

	heappony = new Pony("Lisa", 5);
	return (heappony);
}

void	ponyOnTheStack(void)
{
	Pony	stackpony("Beanie", 7);
}

int	main(void)
{
	Pony	*pony;

	pony = ponyOnTheHeap();
	delete pony;
	ponyOnTheStack();
}