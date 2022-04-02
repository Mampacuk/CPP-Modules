/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:23:44 by aisraely          #+#    #+#             */
/*   Updated: 2022/04/02 15:49:02 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << this->type << " created with default ctor" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << this->type << " destroyed" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal("Cat")
{
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
	std::cout << this->type << " created with copy ctor" << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	*this->_brain = *rhs._brain;
	std::cout << this->type << " assigned" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "* meow! cat noises *" << std::endl;
}