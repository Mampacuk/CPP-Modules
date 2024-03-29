/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:23:44 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 10:23:44 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << this->type << " created with default ctor" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type << " destroyed" << std::endl;
}

Cat::Cat(const Cat&) : Animal("Cat")
{
	std::cout << this->type << " created with copy ctor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "* meow! cat noises *" << std::endl;
}

Cat	&Cat::operator=(const Cat&)
{
	return (*this);
}
