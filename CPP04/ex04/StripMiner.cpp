/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:26:40 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 15:26:40 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

StripMiner::StripMiner(void) {}

StripMiner::~StripMiner(void) {}

StripMiner::StripMiner(const StripMiner&) {}

StripMiner	&StripMiner::operator=(const StripMiner&)
{
	return (*this);
}

void	StripMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* strip mining ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}
