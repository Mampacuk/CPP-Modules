/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:26:20 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 15:26:20 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IMiningLaser.hpp"

class	StripMiner : public IMiningLaser
{
	public:
		StripMiner();
		~StripMiner();
		StripMiner(const StripMiner&);
		StripMiner	&operator=(const StripMiner&);
		void		mine(IAsteroid *asteroid);
};

#endif