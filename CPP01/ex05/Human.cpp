/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:02 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:26:03 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string	Human::identify(void) const
{
	return (_brain.identify());
}

const Brain	&Human::getBrain(void) const
{
	const Brain	&brain = this->_brain;

	return (brain);
}