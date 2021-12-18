/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:53:46 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 10:53:46 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal	&operator=(const WrongAnimal &rhs);
		const std::string	&getType() const;
		void				makeSound() const;
	protected:
		WrongAnimal(const std::string &type);
		std::string	type;
};

#endif