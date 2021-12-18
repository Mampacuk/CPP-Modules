/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:33:06 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 14:33:06 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual 			~IMateriaSource() {}
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria	*createMateria(const std::string &type) = 0;
};

#endif