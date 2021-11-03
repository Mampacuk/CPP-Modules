/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:53:29 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/01 19:06:06 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ClapTrap::ClapTrap(void) {}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[Claptrap " << this->_name << "]\t(destructed) Shutting down." << std::endl;
}

ClapTrap::ClapTrap(const std::string &_name) : _name(_name), _hp(10), _energy(10), _damage(0)
{
	std::cout << "[Claptrap " << this->_name << "]\t(constructed) Activated." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) :  _name(copy._name), _hp(copy._hp), _energy(copy._energy), _damage(copy._damage)
{
	std::cout << "[Claptrap " << this->_name << "]\t(copy-constructed) Hello." << std::endl;
}
ClapTrap	&ClapTrap::operator=(ClapTrap &rhs)
{
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;
	std::cout << "[Claptrap " << this->_name << "]\t(being assigned) Finally, equality was achieved." << std::endl;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_energy >= 2)
	{
		std::cout << "[Claptrap " << this->_name << "]\t(attacking " << target << ", dealing " << this->_damage << " damage) Demolition commenced." << std::endl;
		this->_energy -= 2;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (static_cast<int>(this->_hp) - static_cast<int>(amount) < 0)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << "[Claptrap " << this->_name << "]\t(taking " << amount << " damage; hp now: " << this->_hp << ") It burns..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	std::cout << "[Claptrap " << this->_name << "]\t(repaired " << amount << " points; hp now: " << this->_hp << ") I love it." << std::endl;
}
