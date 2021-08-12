/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:22 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:26:23 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string _type) : _type(_type)
{

}

const std::string	&Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string _type)
{
	this->_type = _type;
}