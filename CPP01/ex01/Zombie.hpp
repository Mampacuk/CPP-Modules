/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:45 by aisraely          #+#    #+#             */
/*   Updated: 2022/02/24 19:46:33 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
	public:
		void	announce(void)	const;
		void	set_name(const std::string &name);
		Zombie(const std::string &_name);
		Zombie(void);
		~Zombie(void);
	private:
		std::string	_name;
};

#endif