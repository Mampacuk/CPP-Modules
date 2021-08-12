/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:47 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:25:48 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string _type)
{
	this->_type = _type;
}

Zombie	*ZombieEvent::newZombie(std::string name) const
{
	Zombie	*zombie;

	zombie = new Zombie(name, this->_type);
	return (zombie);
}

Zombie	*ZombieEvent::randomChump(void) const
{
	Zombie	*zombie;

	zombie = new Zombie(this->_namepool[rand() % 8], this->_type);
	return (zombie);
}

std::string	ZombieEvent::_namepool[8] = {"Nick", "Rochelle", "Coach", "Ellis", "Louis", "Bill", "Francis", "Zoey"};