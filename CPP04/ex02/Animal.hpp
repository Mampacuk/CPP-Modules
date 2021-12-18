/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 00:20:05 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/30 00:20:05 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &copy);
		Animal	&operator=(const Animal &rhs);
		const std::string	&getType() const;
		virtual void		makeSound() const = 0;
	protected:
		Animal(const std::string &type);
		std::string	type;
};

#endif