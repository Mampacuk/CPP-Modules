/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:41 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:25:42 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string _name, std::string _type) : _name(_name), _type(_type)
{
	announce();
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died!" << std::endl;
}

std::string	Zombie::get_type(void) const
{
	return (this->_type);
}

void	Zombie::set_name(std::string _name)
{
	this->_name = _name;
}

void	Zombie::set_type(std::string _type)
{
	this->_type = _name;
}
