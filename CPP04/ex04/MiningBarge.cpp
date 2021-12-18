/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:50:29 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 15:50:29 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge() : _lasers(), _size() {}

MiningBarge::~MiningBarge() {}

MiningBarge::MiningBarge(const MiningBarge &copy) : _lasers(), _size(copy._size)
{
	for (int i = 0; i < this->_size; i++)
		this->_lasers[i] = copy._lasers[i];
}

MiningBarge	&MiningBarge::operator=(const MiningBarge &rhs)
{
	this->_size = rhs._size;
	for (int i = 0; i < this->_size; i++)
		this->_lasers[i] = rhs._lasers[i];
}

void	MiningBarge::equip(IMiningLaser *l)
{
	if (l && this->_size < 4)
		this->_lasers[this->_size++] = l;
}

void	MiningBarge::mine(IAsteroid *asteroid) const
{
	for (int i = 0; i < this->_size; i++)
		this->_lasers[i]->mine(asteroid);
}