/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:09 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:26:10 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string _name, Weapon &_weapon) : _name(_name), _weapon(_weapon)
{

}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
