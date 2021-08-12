/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:16 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:26:17 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _name) : _name(_name)
{

}

void	HumanB::setWeapon(Weapon *_weapon)
{
	this->_weapon = _weapon;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
