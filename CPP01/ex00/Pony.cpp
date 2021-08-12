/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:24:38 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:24:39 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string _name, int _age) : _name(_name), _age(_age)
{
	std::cout << "A beautiful " << this->_age << " years old pony named " << _name << " was born!" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Poor " << this->_name << " died :(" << std::endl;
}
