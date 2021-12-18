/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:23:36 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 15:23:36 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner() {}

DeepCoreMiner::~DeepCoreMiner() {}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner&) {}

DeepCoreMiner	&DeepCoreMiner::operator=(const DeepCoreMiner&)
{
	return (*this);
}

void	DeepCoreMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* mining deep ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}
