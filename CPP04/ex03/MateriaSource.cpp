#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->_size = 0;
	this->_sources = NULL;
}

MateriaSource::~MateriaSource(void)
{
	int	i;

	i = 0;
	while (i < this->_size)
		delete this->_sources[i++];
	delete [] this->_sources;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	int	i;

	this->_size = copy._size;
	this->_sources = new AMateria*[this->_size];
	i = 0;
	while (i < this->_size)
	{
		this->_sources[i] = copy._sources[i]->clone();
		i++;
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	int	i;

	i = 0;
	if (this->_size > 0)
	{
		while (i < this->_size)
			delete this->_sources[i++];
		delete [] _sources;	
	}
	this->_size = rhs._size;
	this->_sources = new AMateria*[this->_size];
	i = 0;
	while (i < this->_size)
	{
		this->_sources[i] = rhs._sources[i]->clone();
		i++;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int				i;
	AMateria	**copy;

	if (!m || this->_size >= 4)
		return ;
	i = 0;
	if (!this->_size)
	{
		copy = new AMateria*[1];
		copy[0] = m;
		this->_sources = copy;
	}
	else
	{
		copy = new AMateria*[this->_size + 1];
		i = 0;
		while (i < this->_size)
		{
			copy[i] = this->_sources[i];
			i++;
		}
		copy[i] = m;
		delete [] this->_sources;
		this->_sources = copy;
	}
	this->_size++;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < this->_size; i++)
	{
		if (type.compare(this->_sources[i]->getType()))
			return (this->_sources[i]);
	}
	return (NULL);
}