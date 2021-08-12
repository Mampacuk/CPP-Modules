/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:17 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:26:18 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class	HumanB
{
	public:
		HumanB(std::string _name);
		void		attack(void)	const;
		void		setWeapon(Weapon *_weapon);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif