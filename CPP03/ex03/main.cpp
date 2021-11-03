/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:02:41 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/03 17:32:33 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	turret1("Ani");

	turret1.guardGate();
	turret1.highFivesGuys();
	turret1.attack("Hakob");
	turret1.attack("Avo");
	turret1.attack("Gevorg");
	turret1.takeDamage(10);
	turret1.beRepaired(10);
	turret1.whoAmI();
}
