/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:17 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 16:15:16 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class	HumanB
{
	public:
		HumanB(const std::string &_name);
		void		attack(void)	const;
		void		setWeapon(Weapon *_weapon);
	private:
		const std::string	&_name;
		Weapon				*_weapon;
};

#endif