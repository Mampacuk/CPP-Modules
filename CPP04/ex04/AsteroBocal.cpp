/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:33:47 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 15:33:47 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroBocal.hpp"

AsteroBocal::AsteroBocal() {}

AsteroBocal::~AsteroBocal() {}

AsteroBocal::AsteroBocal(const AsteroBocal&) {}

AsteroBocal	&AsteroBocal::operator=(const AsteroBocal&)
{
	return (*this);
}

std::string	AsteroBocal::getName(void) const
{
	return ("AsteroBocal");
}

std::string	AsteroBocal::beMined(DeepCoreMiner*) const
{
	return ("Thorite");
}

// std::string	AsteroBocal::beMined(StripMiner*) const
// {
// 	return ("Flavium");
// }
