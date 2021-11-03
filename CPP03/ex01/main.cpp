/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:02:41 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/01 19:42:03 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	turret1("Alex");
	ScavTrap	turret2("Lilith");
	ClapTrap	turret3("Tomma");
	ScavTrap	turret4(turret1);

	turret1.guardGate();
	turret1.attack("Hakob");
	turret1.attack("Avo");
	turret1.attack("Gevorg");
	turret3.attack("Agnessa");
	turret1.takeDamage(10);
	turret1.beRepaired(10);
}
