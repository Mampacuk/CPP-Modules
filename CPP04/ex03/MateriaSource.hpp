/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:32:11 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 14:32:11 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_sources[4];
		int			_size;
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource	&operator=(const MateriaSource &rhs);
		void			learnMateria(AMateria *m);
		AMateria		*createMateria(const std::string &type);
};

#endif