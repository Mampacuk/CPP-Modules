/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:09:58 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 14:09:58 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

class	ICharacter;

class	AMateria
{
	protected:
		std::string		_type;
	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &copy);
		AMateria			&operator=(const AMateria &rhs);
		virtual				~AMateria() {}
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
		const std::string	&getType() const;
};

# include "ICharacter.hpp"

#endif