/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 13:15:51 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 13:15:51 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain allocated" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain deallocated" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain allocated by copy-ctor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain	&Brain::operator=(const Brain &rhs)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
