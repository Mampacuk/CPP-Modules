/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:24:36 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 15:04:08 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*heappony;

	heappony = new Pony("Lisa", 5);
	delete heappony;
}

void	ponyOnTheStack(void)
{
	Pony	stackpony("Beanie", 7);
}

int	main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
}
