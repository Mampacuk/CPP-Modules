/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:43:28 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/01 20:00:07 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap(void);
	public:
		FragTrap(const std::string &_name);
		FragTrap(const FragTrap &copy);
		~FragTrap(void);
		void	highFivesGuys(void);
		using	ClapTrap::operator=;
};

#endif
