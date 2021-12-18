/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:35:48 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 15:35:48 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BocalSteroid.hpp"

BocalSteroid::BocalSteroid() {}

BocalSteroid::~BocalSteroid() {}

BocalSteroid::BocalSteroid(const BocalSteroid&) {}

BocalSteroid	&BocalSteroid::operator=(const BocalSteroid&)
{
	return (*this);
}

std::string	BocalSteroid::getName(void) const
{
	return ("BocalSteroid");
}



// std::string	BocalSteroid::beMined(DeepCoreMiner *deep) const
// {
// 	return ("Zazium");
// }

// std::string	BocalSteroid::beMined(StripMiner *strip) const
// {
// 	return ("Krpite");
// }
