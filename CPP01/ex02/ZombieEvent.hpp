/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:48 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:25:49 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <cstdlib>

class	ZombieEvent
{
	public:
		void	setZombieType(std::string _type);
		Zombie	*newZombie(std::string name)	const;
		Zombie	*randomChump(void)				const;
	private:
		std::string			_type;
		static std::string	_namepool[8];
};

#endif