/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:24:40 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:24:41 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class	Pony
{
	public:
		Pony(std::string _name, int _age);
		~Pony(void);

	private:
		std::string	_name;
		int			_age;
};

#endif