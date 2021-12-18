/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:09:50 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 14:09:50 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria &copy) : _type(copy._type) {}

AMateria	&AMateria::operator=(const AMateria&)
{
	return (*this);
}

const std::string	&AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter&) {}