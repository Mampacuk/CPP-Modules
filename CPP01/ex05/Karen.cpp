/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:47:03 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/08 13:47:03 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my "
		"7XL-double-cheese-triple-pickle-special-ketchup burger."
		" I just love it!" << std::endl << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. "
		"You don't put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been"
		" coming here for years and you just started working here last month." << std::endl << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void	Karen::complain(std::string level)
{
	void (Karen::*actions[])(void) =
	{
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	char	*action_names[] =
	{
		(char *)"debug",
		(char *)"info",
		(char *)"warning",
		(char *)"error"
	};
	for (size_t i = 0; i < 4; i++)
	{
		if (level == action_names[i])
		{
			(this->*actions[i])();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
}
