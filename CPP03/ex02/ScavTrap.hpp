/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:11:19 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/01 19:46:12 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:
		ScavTrap(void);
	public:
		ScavTrap(const std::string &_name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap(void);
		void	attack(std::string const &target);
		void	guardGate(void);
		using	ClapTrap::operator=;
};

#endif
