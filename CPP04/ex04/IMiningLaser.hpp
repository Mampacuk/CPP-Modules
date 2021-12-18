/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:23:13 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 15:23:13 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASER_HPP
# define IMININGLASER_HPP

# include <iostream>

class	IAsteroid;

class	IMiningLaser
{
	public:
		virtual			~IMiningLaser() {}
		virtual void	mine(IAsteroid*) = 0;
};

# include "IAsteroid.hpp"

#endif