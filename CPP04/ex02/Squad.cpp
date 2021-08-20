#include "Squad.hpp"

Squad::Squad(void)
{
	this->_size = 0;
	this->_fleet = NULL;
}

Squad::~Squad(void)
{
	int	i;

	i = 0;
	while (i < this->_size)
		delete this->_fleet[i++];
	delete [] _fleet;
}

Squad::Squad(const ISquad &copy)
{
	int	i;

	this->_size = copy.getCount();
	this->_fleet = new ISpaceMarine*[this->_size];
	i = 0;
	while (i < this->_size)
	{
		this->_fleet[i] = copy.getFleet()[i]->clone();
		i++;
	}
}

Squad	&Squad::operator=(const Squad &rhs)
{
	int	i;

	i = 0;
	if (this->_size > 0)
	{
		while (i < this->_size)
			delete this->_fleet[i++];
		delete [] _fleet;	
	}
	this->_size = rhs._size;
	this->_fleet = new ISpaceMarine*[this->_size];
	i = 0;
	while (i < this->_size)
	{
		this->_fleet[i] = rhs._fleet[i]->clone();
		i++;
	}
	return (*this);
}

int	Squad::getCount(void) const
{
	return (this->_size);
}

ISpaceMarine	**Squad::getFleet(void) const
{
	return (this->_fleet);
}

ISpaceMarine	*Squad::getUnit(int id) const
{
	if (id < 0 || id >= this->_size)
		return (NULL);
	return (this->_fleet[id]);
}

int	Squad::push(ISpaceMarine *ship)
{
	int				i;
	ISpaceMarine	**copy;

	if (!ship)
		return (this->_size);
	i = 0;
	while (i < this->_size)
		if (this->_fleet[i++] == ship)
			return (this->_size);
	if (!this->_size)
	{
		copy = new ISpaceMarine*[1];
		copy[0] = ship;
		this->_fleet = copy;
	}
	else
	{
		copy = new ISpaceMarine*[this->_size + 1];
		i = 0;
		while (i < this->_size)
		{
			copy[i] = this->_fleet[i];
			i++;
		}
		copy[i] = ship;
		delete [] this->_fleet;
		this->_fleet = copy;
	}
	this->_size++;
	return (this->_size);
}