/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:37:24 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 15:37:24 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOCALSTEROID_HPP
# define BOCALSTEROID_HPP

# include "IAsteroid.hpp"

class	BocalSteroid : public IAsteroid
{
	public:
		BocalSteroid();
		~BocalSteroid();
		BocalSteroid(const BocalSteroid &copy);
		BocalSteroid	&operator=(const BocalSteroid&);
		std::string		getName() const;
		std::string		beMined(IMiningLaser *miner) const;
};

#endif