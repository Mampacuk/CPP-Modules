/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:15 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:26:16 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class	HumanA
{
	public:
		HumanA(std::string _name, Weapon &_weapon);
		void		attack(void)	const;
	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif