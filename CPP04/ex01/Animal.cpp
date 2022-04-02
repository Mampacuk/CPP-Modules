/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:11:00 by aisraely          #+#    #+#             */
/*   Updated: 2022/04/02 15:31:55 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created with default ctor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

Animal::Animal(const std::string &type)
{
	this->type = type;
	std::cout << "Animal created with arg ctor" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	this->type = copy.type;
	std::cout << "Animal created with copy ctor" << std::endl;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	this->type = rhs.type;
	return (*this);
}

const std::string	&Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "* animal sound *" << std::endl;
}
