/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:54 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 16:00:56 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int _n)
{
	this->_zombies = new Zombie[_n];
	for (int i = 0; i < _n; i++)
	{
		this->_zombies[i].set_name(this->_namepool[rand() % 8]);
		this->_zombies[i].set_type(this->_typepool[rand() % 8]);
		this->_zombies[i].announce();
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombies;
}

std::string	ZombieHorde::_namepool[8] = {"Nick", "Rochelle", "Coach", "Ellis", "Louis", "Bill", "Francis", "Zoey"};

std::string	ZombieHorde::_typepool[8] = {"Hunter", "Smoker", "Boomer", "Jockey", "Spitter", "Charger", "Witch", "Tank"};