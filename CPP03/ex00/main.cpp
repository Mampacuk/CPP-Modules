/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:02:41 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/01 19:02:54 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	turret1("Rick");
	ClapTrap	turret2("Carl");
	
	turret1.takeDamage(100);
	turret1.takeDamage(5);
	turret2 = turret1;
	turret2.beRepaired(1000);
	turret2.attack("Alpha");
	turret2.attack("Beta");
	turret2.takeDamage(10000);
	turret2.attack("Negan");
	turret2.attack("Wolf");
	turret2.attack("The Governor");
	turret2.attack("Shane Walsh");
	turret2.attack("Jadis");
}