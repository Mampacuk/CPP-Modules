/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:53:33 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/01 19:38:16 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class	ClapTrap
{
	protected:
		const std::string	&_name;
		unsigned int		_hp;
		unsigned int		_energy;
		unsigned int		_damage;
		ClapTrap(void);
	public:
		ClapTrap(const std::string &_name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap(void);
		ClapTrap		&operator=(ClapTrap &rhs);
		virtual void	attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif