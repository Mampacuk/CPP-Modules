/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:32:23 by aisraely          #+#    #+#             */
/*   Updated: 2022/04/02 16:00:56 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _inventory(), _size(0) {}

Character::Character(const std::string &name) : _inventory(), _size(0), _name(name) {}

Character::~Character(void)
{
	for (int i = 0; i < this->_size; i++)
		delete this->_inventory[i];
}

Character::Character(const Character &copy) : _inventory()
{
	this->_size = copy._size;
	this->_name = copy._name;
	for (int i = 0; i < this->_size; i++)
		this->_inventory[i] = copy._inventory[i]->clone();
}

Character	&Character::operator=(const Character &rhs)
{
	for (int i = 0; i < this->_size; i++)
		delete this->_inventory[i];
	this->_size = rhs._size;
	this->_name = rhs._name;
	for (int i = 0; i < this->_size; i++)
		this->_inventory[i] = rhs._inventory[i]->clone();
	return (*this);
}

void	Character::equip(AMateria *m)
{
	if (m && this->_size < 4)
		this->_inventory[this->_size++] = m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->_size)
	{
		idx++;
		while (idx < this->_size)
		{
			this->_inventory[idx - 1] = this->_inventory[idx];
			idx++;
		}
		this->_size--;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->_size)
		this->_inventory[idx]->use(target);
}

const std::string	&Character::getName(void) const
{
	return (this->_name);
}

const AMateria	*Character::getItem(int idx)
{
	if (idx >= 0 && idx < this->_size)
		return (this->_inventory[idx]);
	return (NULL);
}
