/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:23:49 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 10:23:49 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << this->type << " created with default ctor" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type << " destroyed" << std::endl;
}

Dog::Dog(const Dog&) : Animal("Dog")
{
	std::cout << this->type << " created with copy ctor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "* bark! Dog noises *" << std::endl;
}
