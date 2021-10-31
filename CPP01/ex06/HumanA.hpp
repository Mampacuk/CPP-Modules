/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:15 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 16:06:49 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class	HumanA
{
	public:
		HumanA(const std::string &_name, Weapon &_weapon);
		void				attack(void)	const;
	private:
		const std::string	&_name;
		Weapon				&_weapon;
};

#endif