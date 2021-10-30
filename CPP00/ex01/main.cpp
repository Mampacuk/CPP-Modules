/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:50:44 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/30 20:53:21 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string		input;
	std::string		fields[3];
	PhoneBook		phonebook;
	int				search_id;

	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "ENTER THE FIELDS" << std::endl;
			std::cout << "FIRST NAME: ";
			std::getline(std::cin, fields[0]);
			std::cout << "LAST NAME: ";
			std::getline(std::cin, fields[1]);
			std::cout << "NICKNAME: ";
			std::getline(std::cin, fields[2]);
			phonebook.addEntry(fields);
			std::cout << "CONTACT ADDED" << std::endl;
		}
		else if (input == "SEARCH")
		{
			phonebook.displayEntries();
			std::cout << "INSERT INDEX: ";
			std::cin >> search_id;
			if (std::cin.fail() || search_id < 0 || search_id >= phonebook.get_size())
			{
				std::cout << "INVALID INDEX" << std::endl;
				std::cin.clear();
				std::getline(std::cin, input);
				continue ;
			}
			phonebook.displayEntry(search_id);
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
