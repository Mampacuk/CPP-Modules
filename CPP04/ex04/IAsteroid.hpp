/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:28:19 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 15:28:19 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <string>
# include "StripMiner.hpp"
# include "DeepCoreMiner.hpp"

class	IAsteroid
{
	public:
		virtual				~IAsteroid() {}
		virtual std::string	beMined(IMiningLaser*) const = 0;
		virtual std::string	getName() const = 0;
};

#endif