/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 11:40:22 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 11:40:22 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << this->type << " created with default ctor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->type << " destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat&) : WrongAnimal("WrongCat")
{
	std::cout << this->type << " created with copy ctor" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "* woem! wrong cat noises *" << std::endl;
}