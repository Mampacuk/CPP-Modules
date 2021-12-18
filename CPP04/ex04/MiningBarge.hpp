/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:50:39 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 15:50:39 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"

class	MiningBarge
{
	private:
		IMiningLaser	*_lasers[4];
		int				_size;
	public:
		MiningBarge();
		~MiningBarge();
		MiningBarge(const MiningBarge &copy);
		MiningBarge	&operator=(const MiningBarge &rhs);
		void	equip(IMiningLaser*);
		void	mine(IAsteroid*) const;
};

#endif
