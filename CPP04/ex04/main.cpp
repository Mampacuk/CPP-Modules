/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 16:01:23 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 16:01:23 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroBocal.hpp"
#include "BocalSteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"

int	main(void)
{
	IAsteroid		*astero = new AsteroBocal();
	IAsteroid		*steroid = new BocalSteroid();

	IMiningLaser	*deep = new DeepCoreMiner();
	IMiningLaser	*strip = new StripMiner();

	deep->mine(astero);
	deep->mine(steroid);
	strip->mine(astero);
	strip->mine(steroid);

	delete astero;
	delete steroid;
	delete deep;
	delete strip;
}