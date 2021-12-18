/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:32:20 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 15:32:20 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROBOCAL_HPP
# define ASTEROBOCAL_HPP

# include "IAsteroid.hpp"

class	AsteroBocal : public IAsteroid
{
	public:
		AsteroBocal();
		~AsteroBocal();
		AsteroBocal(const AsteroBocal&);
		AsteroBocal	&operator=(const AsteroBocal&);
		std::string	getName() const;
		std::string	beMined(IMiningLaser *miner) const;
};

#endif