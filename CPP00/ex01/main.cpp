/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:50:44 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/05 15:50:45 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

void	ft_displaycontacts(Contact phonebook[8])
{
	int	i;
	int	j;

	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	i = 0;
	while (i < Contact::get_size())
	{
		std::cout << "|         ";
		std::cout << phonebook[i].get_index();
		std::cout << "|";
		if (phonebook[i].get_firstname().length() > 10)
		{
			std::cout << phonebook[i].get_firstname().substr(0, 9);
			std::cout << ".";
		}
		else
		{
			j = 0;
			while (j++ < 10 - phonebook[i].get_firstname().length())
				std::cout << " ";
			std::cout << phonebook[i].get_firstname();
		}
		std::cout << "|";
		if (phonebook[i].get_lastname().length() > 10)
		{
			std::cout << phonebook[i].get_lastname().substr(0, 9);
			std::cout << ".";
		}
		else
		{
			j = 0;
			while (j++ < 10 - phonebook[i].get_lastname().length())
				std::cout << " ";
			std::cout << phonebook[i].get_lastname();
		}
		std::cout << "|";
		if (phonebook[i].get_nickname().length() > 10)
		{
			std::cout << phonebook[i].get_nickname().substr(0, 9);
			std::cout << ".";
		}
		else
		{
			j = 0;
			while (j++ < 10 - phonebook[i].get_nickname().length())
				std::cout << " ";
			std::cout << phonebook[i].get_nickname();
		}
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

int	main(void)
{
	std::string		input;
	Contact			phonebook[8];
	int				selected;
	int				date;
	t_date			bday;

	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (Contact::get_size() < 8)
			{
				std::cout << "ENTER THE FIELDS" << std::endl;
				std::cout << "FIRST NAME: ";
				std::getline(std::cin, input);
				phonebook[Contact::get_size()].set_firstname(input);
				std::cout << "LAST NAME: ";
				std::getline(std::cin, input);
				phonebook[Contact::get_size()].set_lastname(input);
				std::cout << "NICKNAME: ";
				std::getline(std::cin, input);
				phonebook[Contact::get_size()].set_nickname(input);
				std::cout << "LOGIN: ";
				std::getline(std::cin, input);
				phonebook[Contact::get_size()].set_login(input);
				std::cout << "POSTAL ADDRESS: ";
				std::getline(std::cin, input);
				phonebook[Contact::get_size()].set_postaddress(input);
				std::cout << "EMAIL: ";
				std::getline(std::cin, input);
				phonebook[Contact::get_size()].set_email(input);
				std::cout << "PHONE NUMBER: ";
				std::getline(std::cin, input);
				phonebook[Contact::get_size()].set_phonenumber(input);
				std::cout << "BIRTHDAY DATE FORMATTED AS MM/DD/YYYY";
				std::cout << std::endl << "MONTH: ";
				std::cin >> date;
				if (std::cin.fail() || date <= 0 || date > 12)
				{
					std::cout << "DATE PARSING ERROR" << std::endl;
					std::cin.clear();
					std::getline(std::cin, input);
					continue ;
				}
				bday.day = date;
				std::cout << "DAY: ";
				std::cin >> date;
				if (std::cin.fail() || date <= 0 || date > 31)
				{
					std::cout << "DATE PARSING ERROR" << std::endl;
					std::cin.clear();
					std::getline(std::cin, input);
					continue ;
				}
				bday.month = date;
				std::cout << "YEAR: ";
				std::cin >> date;
				if (std::cin.fail() || date <= 0)
				{
					std::cout << "DATE PARSING ERROR" << std::endl;
					std::cin.clear();
					std::getline(std::cin, input);
					continue ;
				}
				bday.year = date;
				phonebook[Contact::get_size()].set_birthday(bday);
				std::cout << "FAVORITE MEAL: ";
				std::getline(std::cin, input);
				std::getline(std::cin, input);
				phonebook[Contact::get_size()].set_favmeal(input);
				std::cout << "YOUR UNDERWEAR COLOR: ";
				std::getline(std::cin, input);
				phonebook[Contact::get_size()].set_underwear(input);
				std::cout << "YOUR DARKEST SECRET: ";
				std::getline(std::cin, input);
				phonebook[Contact::get_size()].set_darkestsecret(input);
				std::cout << "CONTACT ADDED" << std::endl;
				phonebook[Contact::get_size()].set_index(Contact::get_size());
				Contact::increment_size();
			}
			else
				std::cout << "NO MORE ROOM FOR CONTACTS" << std::endl;
		}
		else if (input == "SEARCH")
		{
			ft_displaycontacts(phonebook);
			std::cout << "INSERT INDEX: ";
			std::cin >> selected;
			if (std::cin.fail() || selected < 0 || selected > Contact::get_size() - 1)
			{
				std::cout << "INDEX PARSING ERROR" << std::endl;
				std::cin.clear();
				std::getline(std::cin, input);
				continue ;
			}
			std::cout << "DISPLAYING ENTRY FOR CONTACT WITH INDEX " << selected;
			std::cout << std::endl << "FIRST NAME: " << phonebook[selected].get_firstname();
			std::cout << std::endl << "LAST NAME: " << phonebook[selected].get_lastname();
			std::cout << std::endl << "NICKNAME: " << phonebook[selected].get_nickname();
			std::cout << std::endl << "LOGIN: " << phonebook[selected].get_login();
			std::cout << std::endl << "POSTAL ADDRESS: " << phonebook[selected].get_postaddress();
			std::cout << std::endl << "EMAIL: " << phonebook[selected].get_email();
			std::cout << std::endl << "PHONE NUMBER: " << phonebook[selected].get_phonenumber();
			std::cout << std::endl << "BIRTHDAY DATE: " << phonebook[selected].get_birthday().month
				<< "/" << phonebook[selected].get_birthday().day
				<< "/" << (phonebook[selected].get_birthday().year);
			std::cout << std::endl << "FAVORITE MEAL: " << phonebook[selected].get_favmeal();
			std::cout << std::endl << "THEIR UNDERWEAR COLOR: " << phonebook[selected].get_underwear();
			std::cout << std::endl << "THEIR DARKEST SECRET: " << phonebook[selected].get_darkestsecret() << std::endl;
			std::cin.clear();
			std::getline(std::cin, input);
			continue ;
		}
		else if (input == "EXIT")
			break ;
		else
			std::cout << "INVALID COMMAND" << std::endl;
	}
}
