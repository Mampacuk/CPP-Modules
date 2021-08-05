/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:50:29 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/05 15:50:30 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int	Contact::get_index(void) const
{
	return (this->_index);
}

std::string	Contact::get_firstname(void) const
{
	return (this->_firstname);
}

std::string	Contact::get_lastname(void) const
{
	return (this->_lastname);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_login(void) const
{
	return (this->_login);
}

std::string	Contact::get_postaddress(void) const
{
	return (this->_postaddress);
}

std::string	Contact::get_email(void) const
{
	return (this->_email);
}

std::string	Contact::get_phonenumber(void) const
{
	return (this->_phonenumber);
}

t_date	Contact::get_birthday(void) const
{
	return (this->_birthday);
}

std::string	Contact::get_favmeal(void) const
{
	return (this->_favmeal);
}

std::string	Contact::get_underwear(void) const
{
	return (this->_underwear);
}

std::string	Contact::get_darkestsecret(void) const
{
	return (this->_darkestsecret);
}

void	Contact::set_index(int _index)
{
	this->_index = _index;
}

void	Contact::set_firstname(std::string _firstname)
{
	this->_firstname = _firstname;
}

void	Contact::set_lastname(std::string _lastname)
{
	this->_lastname = _lastname;
}

void	Contact::set_nickname(std::string _nickname)
{
	this->_nickname = _nickname;
}

void	Contact::set_login(std::string _login)
{
	this->_login = _login;
}

void	Contact::set_postaddress(std::string _postaddress)
{
	this->_postaddress = _postaddress;
}

void	Contact::set_email(std::string _email)
{
	this->_email = _email;
}

void	Contact::set_phonenumber(std::string _phonenumber)
{
	this->_phonenumber = _phonenumber;
}

void	Contact::set_birthday(t_date _birthday)
{
	this->_birthday = _birthday;
}

void	Contact::set_favmeal(std::string _favmeal)
{
	this->_favmeal = _favmeal;
}

void	Contact::set_underwear(std::string _underwear)
{
	this->_underwear = _underwear;
}

void	Contact::set_darkestsecret(std::string _darkestsecret)
{
	this->_darkestsecret = _darkestsecret;
}

int	Contact::get_size(void)
{
	return (Contact::_size);
}

void	Contact::increment_size(void)
{
	Contact::_size++;
}

int	Contact::_size = 0;
