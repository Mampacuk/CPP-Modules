/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:25 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:26:26 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon
{
	public:
		Weapon(void);
		Weapon(std::string	_type);
		const std::string	&getType(void)	const;
		void				setType(std::string _type);
	private:
		std::string			_type;
};

#endif