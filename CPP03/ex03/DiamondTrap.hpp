/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:51:41 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/03 17:29:18 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
	private:
		const std::string	&_name;
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &copy);
		~DiamondTrap(void);
		using				FragTrap::_hp;
		using				ScavTrap::_energy;
		using				FragTrap::_damage;
		using				ScavTrap::attack;
		void				whoAmI(void);
};

#endif
