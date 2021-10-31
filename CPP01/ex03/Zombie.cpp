/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:51 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 15:57:38 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(const std::string &_name, const std::string &_type)
{
	this->_name = _name;
	this->_type = _type;
	announce();
}

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died!" << std::endl;
}

const std::string	&Zombie::get_type(void) const
{
	return (this->_type);
}

void	Zombie::set_name(const std::string &_name)
{
	this->_name = _name;
}

void	Zombie::set_type(const std::string &_type)
{
	this->_type = _type;
}
