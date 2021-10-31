/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:45 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 15:11:08 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
	public:
		void				announce(void)	const;
		const std::string	&get_type(void)	const;
		void				set_type(const std::string &_type);
		void				set_name(const std::string &_name);
		Zombie(const std::string &_name, const std::string &_type);
		~Zombie(void);
	private:
		std::string	_name;
		std::string	_type;
};

#endif