/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:23:41 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 15:23:41 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"

class	DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner();
		~DeepCoreMiner();
		DeepCoreMiner(const DeepCoreMiner&);
		DeepCoreMiner	&operator=(const DeepCoreMiner&);
		void			mine(IAsteroid *asteroid);
};

#endif
