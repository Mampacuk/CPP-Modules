/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:33 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 15:15:38 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	Zombie		smoker("Benny", "Smoker");
	Zombie		boomer("Zaz", "Boomer");
	Zombie		spitter("Adele", "Spitter");
	Zombie		hunter("Thor", "Hunter");
	Zombie		witch("Ani", "Witch");
	Zombie		*bridewitch;
	Zombie		*boomette;
	Zombie		*survivor1;
	Zombie		*survivor2;
	Zombie		*survivor3;
	Zombie		*survivor4;
	ZombieEvent	event;

	srand(time(0));

	event.setZombieType(witch.get_type());
	bridewitch = event.newZombie("Nora");
	delete bridewitch;

	survivor1 = event.randomChump();
	survivor2 = event.randomChump();

	event.setZombieType(boomer.get_type());
	boomette = event.newZombie("Lia");
	delete boomette;

	survivor3 = event.randomChump();
	survivor4 = event.randomChump();
	delete survivor4;
	delete survivor3;
	delete survivor2;
	delete survivor1;
}