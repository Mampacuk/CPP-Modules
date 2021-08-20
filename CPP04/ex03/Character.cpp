#include "Character.hpp"

Character::Character(void)
{
	this->_size = 0;
	this->_inventory = NULL;
}

Character::Character(const std::string &name)
{
	this->_size = 0;
	this->_inventory = NULL;
	this->_name = name;
}

Character::~Character(void)
{
	int	i;

	i = 0;
	while (i < this->_size)
		delete this->_inventory[i++];
	delete [] this->_inventory;
}

Character::Character(const Character &copy)
{
	int	i;

	this->_size = copy.getCount();
	this->_inventory = new AMateria*[this->_size];
	i = 0;
	while (i < this->_size)
	{
		this->_inventory[i] = copy.getInventory()[i]->clone();
		i++;
	}
}

Character	&Character::operator=(const Character &rhs)
{
	int	i;

	i = 0;
	if (this->_size > 0)
	{
		while (i < this->_size)
			delete this->_inventory[i++];
		delete [] _inventory;	
	}
	this->_size = rhs._size;
	this->_inventory = new AMateria*[this->_size];
	i = 0;
	while (i < this->_size)
	{
		this->_inventory[i] = rhs._inventory[i]->clone();
		i++;
	}
	return (*this);
}

int	Character::getCount(void) const
{
	return (this->_size);
}

AMateria	**Character::getInventory(void) const
{
	return (this->_inventory);
}

void	Character::equip(AMateria *m)
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
		this->_inventory = copy;
	}
	else
	{
		copy = new AMateria*[this->_size + 1];
		i = 0;
		while (i < this->_size)
		{
			copy[i] = this->_inventory[i];
			i++;
		}
		copy[i] = m;
		delete [] this->_inventory;
		this->_inventory = copy;
	}
	this->_size++;
}

void	Character::unequip(int idx)
{
	int			i;
	int			j;
	AMateria	**copy;

	if (!(idx >= 0 && idx < this->_size))
		return ;
	copy = new AMateria*[this->_size - 1];
	i = 0;
	j = 0;
	while (i < this->_size)
	{
		if (i != idx)
			copy[j++] =  this->_inventory[i];
		i++;
	}
	delete [] this->_inventory;
	this->_inventory = copy;
	this->_size--;
}

void	Character::use(int idx, ICharacter& target)
{
	if (!(idx >= 0 && idx < this->_size))
		return ;
	this->_inventory[idx]->use(target);
}

const std::string	&Character::getName(void) const
{
	return (this->_name);
}