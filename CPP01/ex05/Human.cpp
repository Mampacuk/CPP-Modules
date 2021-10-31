/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:02 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 16:04:38 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string	Human::identify(void) const
{
	return (_brain.identify());
}

const Brain	&Human::getBrain(void) const
{
	return (this->_brain);
}