/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:41 by aisraely          #+#    #+#             */
/*   Updated: 2022/02/24 19:45:51 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::set_name(const std::string &name)
{
	this->_name = name;
}

Zombie::Zombie(const std::string &_name) : _name(_name)
{
	announce();
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died!" << std::endl;
}

Zombie::Zombie(void) {}