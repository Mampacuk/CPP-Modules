/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:34:30 by aisraely          #+#    #+#             */
/*   Updated: 2022/04/02 15:50:53 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	Animal	*pointers[20];

	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
			pointers[i] = new Dog;
		else
			pointers[i] = new Cat;
	}
	pointers[4]->makeSound();
	pointers[10]->makeSound();
	for (int i = 0; i < 20; i++)
		delete pointers[i];

	// Animal	hello;
}