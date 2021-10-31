/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:55 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 16:00:44 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <string>

class	ZombieHorde
{
	public:
		ZombieHorde(int _n);
		~ZombieHorde(void);
	private:
		Zombie				*_zombies;
		static std::string	_namepool[8];
		static std::string	_typepool[8];
};

#endif
