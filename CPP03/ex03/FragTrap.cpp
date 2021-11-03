/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:46:36 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/03 22:14:24 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {}

FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap " << this->_name << "] (destructed) I'm dead :((((((" << std::endl;
}

FragTrap::FragTrap(const std::string &_name) : ClapTrap(_name)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "[FragTrap " << this->_name << "] (constructed) I'm born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "[FragTrap " << this->_name << "] (copy-constructed) I wanna fall in mud..." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "[FragTrap " << this->_name << "] (highing five) High five guys!" << std::endl;
}
