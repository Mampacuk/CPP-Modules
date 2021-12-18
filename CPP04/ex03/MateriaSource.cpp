/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:33:17 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 14:33:17 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _sources(), _size(0) {}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->_size; i++)
		delete this->_sources[i];
}

MateriaSource::MateriaSource(const MateriaSource &copy) : _sources()
{
	this->_size = copy._size;
	for (int i = 0; i < this->_size; i++)
		this->_sources[i] = copy._sources[i]->clone();
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0; i < this->_size; i++)
		delete this->_sources[i];
	this->_size = rhs._size;
	for (int i = 0; i < this->_size; i++)
		this->_sources[i] = rhs._sources[i]->clone();
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (m && this->_size < 4)
		this->_sources[this->_size++] = m;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < this->_size; i++)
	{
		if (!type.compare(this->_sources[i]->getType()))
			return (this->_sources[i]->clone());
	}
	return (NULL);
}