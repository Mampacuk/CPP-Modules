/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:02:41 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/01 19:49:15 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	turret1("Alex");
	FragTrap	turret2("Lilith");
	ClapTrap	turret3("Tomma");
	FragTrap	turret4(turret1);

	turret1.highFivesGuys();
	turret1.attack("Hakob");
	turret1.attack("Avo");
	turret1.attack("Gevorg");
	turret3.attack("Agnessa");
	turret1.takeDamage(10);
	turret1.beRepaired(10);
}
