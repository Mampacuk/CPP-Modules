/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:23:49 by aisraely          #+#    #+#             */
/*   Updated: 2022/04/02 15:49:23 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << this->type << " created with default ctor" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << this->type << " destroyed" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal("Dog")
{
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
	std::cout << this->type << " created with copy ctor" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	*this->_brain = *rhs._brain;
	std::cout << this->type << " assigned" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "* bark! Dog noises *" << std::endl;
}
