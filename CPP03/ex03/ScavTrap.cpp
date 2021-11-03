/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:11:17 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/03 22:14:19 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[ScavTrap " << this->_name << "] (destructed) I'm dead, boo-hoo..." << std::endl;
}

ScavTrap::ScavTrap(const std::string &_name) : ClapTrap(_name)
{
	std::cout << "[ScavTrap " << this->_name << "] (constructed) Kiss my shiny metal ass!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "[ScavTrap " << this->_name << "] (copy-constructed) I was cloned!" << std::endl;
}
void	ScavTrap::guardGate(void)

{
	std::cout << "[ScavTrap " << this->_name << "] (guarding) Guard mode activated..." << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->_energy >= 5)
	{
		std::cout << "[ScavTrap " << this->_name << "] (attacking " << target << ", dealing " << this->_damage << " damage) I'mma kill youuuuuuuuu" << std::endl;
		this->_energy -= 5;
	}
}
