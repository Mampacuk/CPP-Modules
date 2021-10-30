/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 20:29:17 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/30 21:04:24 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _size(0), _insert_id(0) {}

void PhoneBook::addEntry(std::string fields[3])
{
	this->_contacts[this->_insert_id].set_firstname(fields[0]);
	this->_contacts[this->_insert_id].set_lastname(fields[1]);
	this->_contacts[this->_insert_id].set_nickname(fields[2]);
	this->_insert_id = (this->_insert_id + 1) % 8;
	if (this->_size < 8)
		this->_size++;
}

void	PhoneBook::displayEntry(int i) const
{
	std::cout << "First Name:\t" << this->_contacts[i].get_firstname() << std::endl;
	std::cout << "Last Name:\t" << this->_contacts[i].get_lastname() << std::endl;
	std::cout << "Nickname:\t" << this->_contacts[i].get_nickname() << std::endl;
}

int		PhoneBook::get_size(void) const
{
	return (this->_size);
}

void	PhoneBook::displayEntries(void) const
{
	unsigned int	i;
	unsigned int	j;

	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	i = 0;
	while (i < this->_size)
	{
		std::cout << "|         ";
		std::cout << i;
		std::cout << "|";
		if (this->_contacts[i].get_firstname().length() > 10)
		{
			std::cout << this->_contacts[i].get_firstname().substr(0, 9);
			std::cout << ".";
		}
		else
		{
			j = 0;
			while (j++ < 10 - this->_contacts[i].get_firstname().length())
				std::cout << " ";
			std::cout << this->_contacts[i].get_firstname();
		}
		std::cout << "|";
		if (this->_contacts[i].get_lastname().length() > 10)
		{
			std::cout << this->_contacts[i].get_lastname().substr(0, 9);
			std::cout << ".";
		}
		else
		{
			j = 0;
			while (j++ < 10 - this->_contacts[i].get_lastname().length())
				std::cout << " ";
			std::cout << this->_contacts[i].get_lastname();
		}
		std::cout << "|";
		if (this->_contacts[i].get_nickname().length() > 10)
		{
			std::cout << this->_contacts[i].get_nickname().substr(0, 9);
			std::cout << ".";
		}
		else
		{
			j = 0;
			while (j++ < 10 - this->_contacts[i].get_nickname().length())
				std::cout << " ";
			std::cout << this->_contacts[i].get_nickname();
		}
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}
