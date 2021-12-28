/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:47 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 15:16:05 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(const std::string &_type)
{
	this->_type = _type;
}

Zombie	*ZombieEvent::newZombie(const std::string &name) const
{
	return (new Zombie(name, this->_type));
}

Zombie	*ZombieEvent::randomChump(void) const
{
	return (new Zombie(this->_namepool[rand() % 8], this->_type));
}

std::string	ZombieEvent::_namepool[8] = {"Nick", "Rochelle", "Coach", "Ellis", "Louis", "Bill", "Francis", "Zoey"};